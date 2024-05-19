#ifndef MATRIX_H
#define MATRIX_H

#include <iostream>
#include <vector>
#include <stdexcept>

namespace matrixlib{ 

/**
 * @brief Template class for representing a matrix.
 * 
 * @tparam T Type of the elements in the matrix.
 */
template <typename T> 
class Matrix{
private:
    // Private attributes of matrix class
    std::vector<std::vector<T> > matrix; /**< 2D vector representing the matrix */
    int row; /**< Number of rows in the matrix */
    int column; /**< Number of columns in the matrix */
public:

    /**
     * @brief Constructor to initialize the matrix with given rows and columns.
     * 
     * @param row Number of rows.
     * @param column Number of columns.
     */
    explicit Matrix(int row, int column): row(row), column(column)
    {   
        // Creating matrix with given row and column
        std::vector<std::vector<T> > vectorMain = {};
        for(int i = 0; i < row; i++){
            std::vector<T> vectorSub = {};
            for(int j = 0; j < column; j++){
                    vectorSub.push_back(0);
            }
            vectorMain.push_back(vectorSub);
        }
        matrix = vectorMain;
    };

     /**
     * @brief Constructor to initialize the matrix with a given 2D vector.
     * 
     * @param matrix 2D vector to initialize the matrix.
     */
    explicit Matrix(const std::vector<std::vector<T> >& matrix): matrix(matrix) 
    {
        // Creating matrix with given vector
        row = matrix.size();
        column = matrix[0].size();
    };

    /**
     * @brief Overloaded indexing operator.
     * 
     * @param index Row index.
     * @return Reference to the vector at the specified row index.
     */
    std::vector<T>& operator[](int index) {
        return matrix[index];
    };

    /**
     * @brief Overloaded indexing operator for const objects.
     * 
     * @param index Row index.
     * @return Const reference to the vector at the specified row index.
     */
    const std::vector<T>& operator[](int index) const {
        return matrix[index];
    };

    /**
     * @brief Overloaded output stream operator for printing the matrix.
     * 
     * @param os Output stream.
     * @param matrix Matrix object to be printed.
     * @return Reference to the output stream.
     */
    friend std::ostream& operator<<(std::ostream& os, const Matrix<T>& matrix) {
            for(int i = 0; i < matrix.row; i++){
                for(int j = 0; j < matrix.column; j++){
                    if(j != matrix.column - 1){
                        os << matrix.matrix[i][j] << " ";
                    } else {
                        os << matrix.matrix[i][j] << std::endl;
                    }
                }
            }
            return os;
    };

    /**
     * @brief Overloaded subtraction operator.
     * 
     * @param vector2 Matrix to subtract from the current matrix.
     * @return Resultant matrix after subtraction.
     */
    Matrix<T> operator-(Matrix<T> vector2){
        bool sameSize = sameDimension(vector2); // check if the dimensions are the same
        if(!sameSize){
            std::cout << "Dimensions are not matched!" << std::endl;
        } 
        Matrix<T> newMatrix(row, column);
        T total = 0;
        for(int i = 0; i < row; i++){
                for(int j = 0; j < column; j++){
                    total = matrix[i][j] - vector2[i][j];
                    newMatrix[i][j] = total;
                    total = 0;
                }
        }
        return newMatrix;
    };

    /**
     * @brief Overloaded addition operator.
     * 
     * @param vector2 Matrix to add to the current matrix.
     * @return Resultant matrix after addition.
     */
    Matrix<T> operator+(Matrix<T> vector2){
        bool sameSize = sameDimension(vector2); // check if the dimensions are the same
        if(!sameSize){
            std::cout << "Dimensions are not matched!" << std::endl;
            return vector2;
        } 
        Matrix<T> newMatrix(row, column);
        int total = 0;
        for(int i = 0; i < row; i++){
                for(int j = 0; j < column; j++){
                    total = matrix[i][j] + vector2[i][j];
                    newMatrix[i][j] = total;
                    total = 0;
                }
        }
        return newMatrix;
    };

    /**
     * @brief Overloaded division operator.
     * 
     * @param num Scalar value to divide the matrix elements by.
     * @return Resultant matrix after division.
     */  
    Matrix<double> operator/(T num) {
        if(num == 0){
            std::cout << "Cannot divide by zero!" << std::endl;
            // It would be better to throw an exception in real code:
            
        }
        Matrix<double> matrix2(row, column);
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                matrix2[i][j] = static_cast<double>(matrix[i][j]) / static_cast<double>(num);
            }
        }
        return matrix2;
    }     

    /**
     * @brief Overloaded multiplication operator.
     * 
     * @param num Scalar value to multiply the matrix elements by.
     * @return Resultant matrix after multiplication.
     */
    Matrix<double> operator*(T num) {
        Matrix<double> matrix2(row, column);
        for(int i = 0; i < row; i++){
            for(int j = 0; j < column; j++){
                matrix2[i][j] = static_cast<double>(matrix[i][j]) * static_cast<double>(num);
            }
        }
        return matrix2;
    }   

    // functions for matrix operations
    /**
     * @brief Calculates the inverse of the matrix.
     * 
     * @return Inverse of the matrix.
     */
    Matrix<double> inverse(){
        if(row != column && row > 3){ // check if the matrix is squared and less than 3
            std::cout << "The matrix should be squared and less than 3!" << std::endl;;
        }
        else if(determinant() == 0){ // check if the matrix is non-singular
            std::cout << "The matrix should be non-singular!" << std::endl;;
        }else{
            T det = determinant();
            if(det < 0){ // determinant has to be positive
                det = det * (-1);
            }
            Matrix<int> adj = adjoint(); // get the adjoint matrix
            Matrix<double> inv(row, column); // create a new matrix for inverse
            for (int i = 0; i < row; ++i) {
                for (int j = 0; j < column; ++j) {
                    inv[i][j] = static_cast<double>(adj[i][j]); // convert the adjoint matrix to double
                }
            }
            inv = inv / det; // divide the adjoint matrix by the determinant
            return inv;
        }
    };

    /**
     * @brief Calculates the trace of the matrix.
     * 
     * @return Trace of the matrix.
     */
    T trace(){ // trace of a matrix
        if(row != column){ // check if the matrix is squared
            std::cout << "The matrix should be squared!" << std::endl;;
        }  else{
            T total = 0;
            for(int i = 0; i < row; i++){
                total += matrix[i][i]; // sum of the diagonal elements
            }
            return total;
        }
    };

    /**
     * @brief Calculates the determinant of the matrix.
     * 
     * @return Determinant of the matrix.
     */
    T determinant(){ // determinant of a matrix
        if(row != column && row > 3){ // check if the matrix is squared and less than 3
            std::cout << "The matrix should be squared and less than 3!" << std::endl;;
        } else{
            T det;
            if(row == 1){ // determinant of a 1x1 matrix
                det = matrix[0][0];
                return det;
            } else if(row == 2){ // determinant of a 2x2 matrix
                det = (matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]);

                return det;
            } else if(row == 3){ // determinant of a 3x3 matrix
                int det1 = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2]* matrix[2][1]);
                int det2 = matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[2][0]* matrix[1][2]);
                int det3 = matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
                det = det1 - det2 + det3;
                return det;
            }
        }
    };

    /**
     * @brief Calculates the adjoint of the matrix.
     * 
     * @return Adjoint of the matrix.
     */
    Matrix<T> adjoint(){ // adjoint of a matrix
        return cofactor().transpose();
    };

    /**
     * @brief Calculates the cofactor matrix.
     * 
     * @return Cofactor matrix.
     */
    Matrix<T> cofactor(){ // cofactor of a matrix
        if(row != column && row > 3){ // check if the matrix is squared and less than 3
            std::cout << "The matrix should be squared and less than 3!" << std::endl;;
        }
        else if(row == 1){ // cofactor of a 1x1 matrix
                return *this;
        }
        else if(row == 2){ // cofactor of a 2x2 matrix
            Matrix<T> newMatrix(2,2);
            newMatrix[0][0] = matrix[1][1];
            newMatrix[0][1] = matrix[1][0] * (-1);
            newMatrix[1][0] = matrix[0][1] * (-1);
            newMatrix[1][1] = matrix[0][0];
            return newMatrix;
        }
        else if(row == 3){ // cofactor of a 3x3 matrix
            Matrix<T> newMatrix(3,3);
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    Matrix<T> sub = subMatrix(i, j); // get the submatrix (2x2)
                    T det = sub.determinant(); // get the determinant of the submatrix
                    if((i + j) % 2 == 1){ // check if the element is odd
                        newMatrix[i][j] = det * (-1);
                    } else {
                        newMatrix[i][j] = det;
                    }
                }
            }
            return newMatrix;
        }
    };

    /**
     * @brief Generates a submatrix by removing the specified row and column.
     * 
     * @param arow Row to be removed.
     * @param acolumn Column to be removed.
     * @return Submatrix after removing the specified row and column.
     */
    Matrix<T> subMatrix(int arow, int acolumn){ // get the submatrix of a matrix by removing a row and a column
        std::vector<std::vector<T>> newVector = {};
        std::vector<T> newRow = {};
        for(int n = 0; n < row; n++){
            if(n == (arow)) continue; // skip the row
            for(int m = 0; m < column; m++){
                if(m == (acolumn))continue; // skip the column
                else {
                    newRow.push_back(matrix[n][m]);
                }
            }
            newVector.push_back(newRow); // add the new row to the new matrix
            newRow = {}; // clear the row
        }
        Matrix<T> newMatrix(newVector);
        return newMatrix;
    };

    /**
     * @brief Calculates the transpose of the matrix.
     * 
     * @return Transpose of the matrix.
     */
    Matrix<T> transpose(){ // transpose of a matrix
        std::vector<T> newRow = {};
        std::vector<std::vector<T> > newVector = {};
        for(int i = 0; i < column; i++){ // swap the rows and columns
                for(int j = 0; j < row; j++){ 
                    newRow.push_back(matrix[j][i]); 
                }
                newVector.push_back(newRow); // add the new row to the new matrix
                newRow = {}; // clear the row
        }
        Matrix<T> newMatrix(newVector);
        return  newMatrix;
    };

    /**
     * @brief Checks if two matrices have the same dimensions.
     * 
     * @param vector2 Matrix to compare with.
     * @return True if the dimensions are the same, false otherwise.
     */
    bool sameDimension(Matrix<T> vector2){ // check if the dimensions are the same
         return row == vector2.row && column == vector2.column;
    };

    /**
     * @brief Returns the negative of the matrix.
     * 
     * @return Negative of the matrix.
     */
    Matrix<T> neg(){ // negative of a matrix
        Matrix newMatrix(row, column);
        for(int i = 0; i < row; i++){ // multiply the matrix by -1
                for(int j = 0; j < column; j++){
                    newMatrix[i][j]= (matrix[i][j] * (-1));
                }
        }
        return newMatrix;
    };

    /**
     * @brief Multiplies two matrices element-wise.
     * 
     * @param vector2 Matrix to multiply with.
     * @return Resultant matrix after element-wise multiplication.
     */
    Matrix<T> multiply(Matrix<T> vector2){ // multiply two matrices
        if((row != vector2.row) || (column != vector2.column)){ // check if the dimensions are the same
            std::cout << "Dimensions are not matched!" << std::endl;
            return Matrix<T>({{}});
        } else{
            Matrix<T> newMatrix(row, column);
            for(int i = 0; i < row; i++){ // multiply the matrices
                for(int j = 0; j < column; j++){
                    newMatrix[i][j] = matrix[i][j] * vector2[i][j]; // multiply the elements
                }
            }
            return newMatrix;
        }
    };

    /**
     * @brief Calculates the dot product of two matrices.
     * 
     * @param vector2 Matrix to multiply with.
     * @return Resultant matrix after dot product.
     */
    Matrix<T> dot(Matrix vector2){ // dot product of two matrices
        if(column != vector2.row){ // check if the dimensions are the same
            std::cout << "Dimensions are not matched!" << std::endl;
            return Matrix<T>({{}});
        } else {
            Matrix<T> newMatrix(row, vector2.column); // create a new matrix with new dimensions
            for (int i = 0; i < row; ++i) { 
                for (int j = 0; j < vector2.column; ++j) {
                    for (int k = 0; k < vector2.row; ++k) {
                        newMatrix[i][j] += matrix[i][k] * vector2[k][j];
                    }
                }
            }
            return newMatrix;
        }
    }; 

    /**
     * @brief Calculates the magnitude of the matrix.
     * 
     * @return Magnitude of the matrix.
     */
    T magnitude(){ // magnitude of a matrix
        T total = 0;
        for(int i = 0; i < row; i++){
                for(int j = 0; j < column; j++){
                    total = matrix[i][j] * matrix[i][j]; // square the elements
                }
        }
        T rootTotal = sqrt(total); // get the square root of the sum
        return rootTotal;
    };

    /**
     * @brief Creates a matrix with all elements set to zero.
     * 
     * @param row Number of rows.
     * @param column Number of columns.
     * @return Matrix with all elements set to zero.
     */
    static Matrix<T> zeroes(int row, int column){ // create a matrix with zeros
        std::vector<std::vector<T> > vectorMain = {}; // create a vector of vectors
        for(int i = 0; i < row; i++){
            std::vector<T> vectorSub = {};
            for(int j = 0; j < column; j++){
                    vectorSub.push_back(0);
            }
            vectorMain.push_back(vectorSub);
        }
        Matrix<T> newMatrix(vectorMain); // create a new matrix
        return newMatrix;
    };

    /**
     * @brief Creates a matrix with all elements set to one.
     * 
     * @param row Number of rows.
     * @param column Number of columns.
     * @return Matrix with all elements set to one.
     */
    static Matrix<T> ones(int row, int column){ // create a matrix with ones
        std::vector<std::vector<T> > vectorMain = {}; // create a vector of vectors
        for(int i = 0; i < row; i++){
            std::vector<T> vectorSub = {};
            for(int j = 0; j < column; j++){
                    vectorSub.push_back(1);
            }
            vectorMain.push_back(vectorSub);
        }
        Matrix<T> newMatrix(vectorMain); // create a new matrix
        return newMatrix;
    };

    /**
     * @brief Creates an identity matrix.
     * 
     * @param num Size of the identity matrix.
     * @return Identity matrix of the given size.
     */
    static Matrix<T> identity(int num){ // create an identity matrix
        if(num < 1) std::cout << "Dimensions are not matched!" << std::endl; // check if the row is greater than 1
        Matrix<T> newMatrix = Matrix<T>(num, num);
        for(int p = 0; p < num; p++){
            newMatrix[p][p] = 1; // set the diagonal elements to 1
        }
        return newMatrix;
    };
};
};
#endif
#include "try.h"
#include <iostream>

using namespace matrixlib;
int main(){
    Matrix<int> matrix1(2, 2); // 2x2 matrix
    Matrix<int> matrix2(3, 3); // 3x3 matrix
    Matrix<int> matrix3({{3,4,5},{6,7,8},{2,8,9}}); // 3x3 matrix
    Matrix<int> matrix4({{8,23,45}, {3,65,6}, {21,6,6}}); // 3x3 matrix
    Matrix<int> matrix5({{1,2},{3,4}}); // 2x2 matrix
    Matrix<int> matrix6(4,4); // 4x4 matrix

    // operation overloading
    std::cout << matrix3 + matrix4 << std::endl; //adding two matrices
    std::cout << matrix3 - matrix4 << std::endl; //subtracting two matrices
    std::cout << matrix3 * 5.0<< std::endl; //multiplying two matrices
    std::cout << matrix3 / 5.0 << std::endl; //dividing two matrices //bak buna///
    
    // static zeroes(), ones(), identity() functions
    std::cout << Matrix<int>::zeroes(9, 5) << std::endl; // 9x5 zero matrix
    std::cout << Matrix<int>::ones(3, 6) << std::endl; // 3x6 ones matrix
    std::cout << Matrix<int>::identity(7) << std::endl; // 7x7 identity matrix

    // neg() function
    std::cout << matrix4.neg() << std::endl; // negating matrix4

    // magnitude() function
    std::cout << matrix5.magnitude() << std::endl; // magnitude of matrix2

    // trace() function
    std::cout << matrix3.trace() << std::endl; // trace of matrix3

    // multiply() function
    std::cout << matrix3.multiply(matrix4) << std::endl; // multiplying matrix3 and matrix4
    std::cout << matrix3.multiply(matrix5) << std::endl; // dimensions are not matching

    // dot() function
    std::cout << matrix5.dot(matrix5) << std::endl; // dot product of matrix5 and matrix5
    std::cout << matrix5.dot(matrix4) << std::endl; // dimensions are not matching
    std::cout << matrix3.dot(matrix4) << std::endl; // dot product of matrix3 and matrix4

    // determinant() function
    std::cout << matrix3.determinant() << std::endl; // determinant of matrix3
    std::cout << matrix5.determinant() << std::endl; // determinant of matrix5

    // transpose() function
    std::cout << matrix3.transpose() << std::endl; // transpose of matrix3
    std::cout << matrix5.transpose() << std::endl; // transpose of matrix5

    // inverse() function
    std::cout << matrix3.inverse() << std::endl; // inverse of matrix3
    std::cout << matrix5.inverse() << std::endl; // inverse of matrix5

    // utility functions
    // subMatrix() function
    std::cout << matrix3.subMatrix(1, 1) << std::endl; // submatrix of matrix3
    std::cout << matrix5.subMatrix(1, 1) << std::endl; // submatrix of matrix5
    std::cout << matrix4.subMatrix(0,0) << std::endl; // submatrix of matrix3

    // sameDimension() function
    std::cout << matrix3.sameDimension(matrix4) << std::endl; // checking if matrix3 and matrix4 have same dimensions
    std::cout << matrix5.sameDimension(matrix6) << std::endl; // checking if matrix5 and matrix6 have same dimensions

    // cofactor() function
    std::cout << matrix3.cofactor() << std::endl; // cofactor of matrix3
    std::cout << matrix5.cofactor() << std::endl; // cofactor of matrix5

    // adjoint() function
    std::cout << matrix3.adjoint() << std::endl; // adjoint of matrix3
    std::cout << matrix5.adjoint() << std::endl; // adjoint of matrix5
    
    return 0;
}
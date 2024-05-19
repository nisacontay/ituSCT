#include "calculator.h"
#include <string>

/**
 * @brief Main function that drives the calculator program.
 * 
 * This program performs basic arithmetic operations based on user input.
 * The supported operations are addition, subtraction, multiplication, 
 * division, square, exponentiation, and modulus.
 * 
 * @return int Exit status of the program.
 */
int main(){
    std::cout << "Calculator Starting..." << std::endl;
    Calculator Calculator; ///< Instance of the Calculator class.
    char tus; ///< Character for user choice to continue or exit.
    std::string opr; ///< String for the operation number input.
    std::string num1; ///< String for the first number input.
    std::string num2; ///< String for the second number input.
    float numf1; ///< Float representation of the first number.
    float numf2; ///< Float representation of the second number.
    int oprt; ///< Integer representation of the operation number.
    do {
        std::cout << "Operations: \n"
        "1.addition\n"
        "2.substraction\n"
        "3.multiplication\n"
        "4.division\n"
        "5.square\n"
        "6.exponentiation\n"
        "7.modulus\n"<<std::endl;
        while (true) {
            std::cout << "Enter operation number (1-7): ";
            std::cin >> opr; 
            if (opr.length() == 1 && isdigit(opr[0])) {
                oprt = static_cast<int>(opr[0] - '0');
                if (oprt < 1 || oprt > 7) {
                    std::cout << "Invalid operation number! Enter again: ";
                    continue;
                } else{
                    break;
                }
            } else{
                std::cout << "Invalid operation number! Enter again: ";
            }
        }
        while (true) {
            std::cout << "First num: ";
            std::cin >> num1;
            bool valid = true;
            if(num1.length() < 1){
                std::cout << "Invalid operation number! Enter again: ";
                continue;
            } else {
                for(int i = 0; i < num1.length(); i++){
                    if (!isdigit(num1[i]) && num1[i] != '.') {
                    valid = false;
                    break;
            }}
            if (!valid) {
                std::cout << "Invalid operation number! Enter again: ";
                continue;
            }
            numf1 = std::stof(num1);
                break;
            }
        }
        while (true) {
            if (oprt == 5) {
                break;
            }
            std::cout << "Second num: ";
            std::cin >> num2;
            bool valid = true;
            if(num2.length() < 1){
                std::cout << "Invalid operation number! Enter again: ";
                continue;
            } else {
                for(int i = 0; i < num2.length(); i++){
                    if (!isdigit(num2[i]) && num2[i] != '.') {
                    valid = false;
                    break;
            }}
            if (!valid) {
                std::cout << "Invalid operation number! Enter again: ";
                continue;
            }
            numf2 = std::stof(num2);
                break;
            }
        }
        switch(oprt){
            case 1:
                std::cout << Calculator.addition(numf1, numf2) << std::endl;
                break;
            case 2:
                std::cout << Calculator.subtraction(numf1, numf2) << std::endl;
                break;
            case 3:
                std::cout << Calculator.multiplication(numf1, numf2) << std::endl;
                break;
            case 4:
                std::cout << Calculator.division(numf1, numf2) << std::endl;
                break;
            case 5:
                std::cout << Calculator.square(numf1) << std::endl;
                break;
            case 6:
                std::cout << Calculator.exponentiation(numf1, numf2) << std::endl;
                break;
            case 7:
                std::cout << Calculator.modulus(numf1, numf2) << std::endl;
                break;
            default: 
                std::cout << "Invalid operation!" << std::endl;
                break;
        }
        std::cout << "Enter a button to continue, press 'e' to exit: ";
        std::cin >> tus;
        if (tus == 'e') std::cout << "Calculator is closing..." << std::endl;
        else std::cout << "Calculator is continuing..." << std::endl;
    } while (tus != 'e');

    return 0;
}
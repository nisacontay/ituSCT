#include "calculator.h"
#include <iostream>
#include <cmath>

/**
 * @brief Adds two floating-point numbers.
 * @param x First number.
 * @param y Second number.
 * @return The sum of x and y.
 */
float Calculator::addition(float x, float y) {
    return (x + y);
}

/**
 * @brief Subtracts one floating-point number from another.
 * @param x The number to be subtracted from.
 * @param y The number to subtract.
 * @return The result of x - y.
 */
float Calculator::subtraction(float x, float y) {
    return (x - y);
}

/**
 * @brief Multiplies two floating-point numbers.
 * @param x First number.
 * @param y Second number.
 * @return The product of x and y.
 */
float Calculator::multiplication(float x, float y) {
    return (x * y);
}

/**
 * @brief Divides one floating-point number by another.
 * @param x The numerator.
 * @param y The denominator.
 * @return The result of x / y.
 * @throws const char* if y is zero.
 */
float Calculator::division(float x, float y) {
    try {
        if (y == 0) throw "Zero division!";
    } catch (const char* msg) {
        std::cout << "Exception caught: " << msg << std::endl;
        return 0;
    }
    return (x / y);
}

/**
 * @brief Calculates the square of a floating-point number.
 * @param x The number to be squared.
 * @return The square of x.
 */
float Calculator::square(float x) {
    return (x * x);
}

/**
 * @brief Raises one floating-point number to the power of another.
 * @param x The base.
 * @param y The exponent.
 * @return The result of x raised to the power y.
 */
float Calculator::exponentiation(float x, float y) {
    float var = 1;
    for (int i = 0; i < y; i++) {
        var *= x;
    }
    return var;
}

/**
 * @brief Computes the modulus of two floating-point numbers.
 * @param x The dividend.
 * @param y The divisor.
 * @return The remainder of the division of x by y.
 */
float Calculator::modulus(float x, float y) {
    float var = std::fmod(x, y);
    if (y == 0) std::cout << "Modulus is zero!" << std::endl;
    return var;
}
// Path: task1/calculator/main.cpp
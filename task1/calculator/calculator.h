#include <iostream>

/**
 * İTÜ Solar Car Team
 * Nisa Çontay
 * 19.05.2024
 */

/**
 * @class Calculator
 * @brief A class for performing basic arithmetic operations.
 */
class Calculator {
public:
    /**
     * @brief Adds two floating-point numbers.
     * @param x First number.
     * @param y Second number.
     * @return The sum of x and y.
     */
    float addition(float x, float y);

    /**
     * @brief Subtracts one floating-point number from another.
     * @param x The number to be subtracted from.
     * @param y The number to subtract.
     * @return The result of x - y.
     */
    float subtraction(float x, float y);

    /**
     * @brief Multiplies two floating-point numbers.
     * @param x First number.
     * @param y Second number.
     * @return The product of x and y.
     */
    float multiplication(float x, float y);

    /**
     * @brief Divides one floating-point number by another.
     * @param x The numerator.
     * @param y The denominator.
     * @return The result of x / y.
     * @throw std::invalid_argument if y is zero.
     */
    float division(float x, float y);

    /**
     * @brief Calculates the square of a floating-point number.
     * @param x The number to be squared.
     * @return The square of x.
     */
    float square(float x);

    /**
     * @brief Raises one floating-point number to the power of another.
     * @param x The base.
     * @param y The exponent.
     * @return The result of x raised to the power y.
     */
    float exponentiation(float x, float y);

    /**
     * @brief Computes the modulus of two floating-point numbers.
     * @param x The dividend.
     * @param y The divisor.
     * @return The remainder of the division of x by y.
     * @throw std::invalid_argument if y is zero.
     */
    float modulus(float x, float y);
};
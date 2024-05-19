#include <iostream>
#include <cmath>

/**
 * @enum Region
 * @brief Enumerates the regions in a 3D space.
 */
enum Region {
    F1, ///< Front-top-right region.
    F2, ///< Front-top-left region.
    F3, ///< Front-bottom-left region.
    F4, ///< Front-bottom-right region.
    B1, ///< Back-top-right region.
    B2, ///< Back-top-left region.
    B3, ///< Back-bottom-left region.
    B4, ///< Back-bottom-right region.
    NR  ///< No Region, on an axis.
};

/**
 * @brief Strings representing the names of each region.
 */
const char* regionStrings[] = {
    "F1", "F2", "F3", "F4",
    "B1", "B2", "B3", "B4",
    "NR"
};

/**
 * @struct Point
 * @brief Represents a point in 3D space.
 */
struct Point {
    float x; ///< X coordinate.
    float y; ///< Y coordinate.
    float z; ///< Z coordinate.

    /**
     * @brief Constructs a Point with given coordinates.
     * @param x X coordinate.
     * @param y Y coordinate.
     * @param z Z coordinate.
     */
    Point(float x, float y, float z) : x(x), y(y), z(z) {};
};

/**
 * @brief Calculates the distance of a point from the origin (0, 0, 0).
 * @param n The point.
 * @return The distance from the origin.
 */
float zero_distance(Point n);

/**
 * @brief Calculates the distance between two points in 3D space.
 * @param p1 The first point.
 * @param p2 The second point.
 * @return The distance between p1 and p2.
 */
float distance(Point p1, Point p2);

/**
 * @brief Determines the region of a point in 3D space.
 * @param n The point.
 * @return The region in which the point lies.
 */
Region region(Point n);

/**
 * @brief Checks if two points lie in the same region.
 * @param p1 The first point.
 * @param p2 The second point.
 * @return True if p1 and p2 are in the same region, false otherwise.
 */
bool is_in_same_region(Point p1, Point p2);

int main() {
    Point p1(-2, -2, 2); 
    Point p2(3, 2, 2);
    Point p3(0, 0, 0);
    Point p4(1, 1, 2);

    std::cout << regionStrings[region(p1)] << std::endl;  
    std::cout << regionStrings[region(p2)] << std::endl;  
    std::cout << regionStrings[region(p3)] << std::endl;
    std::cout << regionStrings[region(p4)] << std::endl;
    std::cout << zero_distance(p1) << std::endl;
    std::cout << zero_distance(p2) << std::endl;
    std::cout << distance(p1, p2) << std::endl;
    std::cout << is_in_same_region(p1, p2) << std::endl;
    std::cout << is_in_same_region(p2, p4) << std::endl;

    return 0;
}

float zero_distance(Point n) {
    float var = n.x * n.x + n.y * n.y + n.z * n.z;
    return std::sqrt(var);
}

float distance(Point p1, Point p2) {
    float x = p1.x - p2.x;
    float y = p1.y - p2.y;
    float z = p1.z - p2.z;
    float var = x * x + y * y + z * z;
    return std::sqrt(var);
}

/**
 * @brief Compares two points based on their distance from the origin.
 * @param p1 The first point.
 * @param p2 The second point.
 * @return The greater distance from the origin between p1 and p2.
 */
float compare(Point p1, Point p2) {
    float var1 = zero_distance(p1);
    float var2 = zero_distance(p2);
    return (var1 > var2) ? var1 : var2;
}

Region region(Point n) {
    if (n.x == 0 || n.y == 0 || n.z == 0) {
        return NR; ///< If the point lies on one of the axes.
    }
    if (n.z > 0) { 
        if (n.y > 0) {
            if (n.x > 0) {
                return F1;
            } else {
                return F2;
            }
        } else {
            if (n.x > 0) {
                return F4;
            } else {
                return F3;
            }
        }
    } else {
        if (n.y > 0) {
            if (n.x > 0) {
                return B1;
            } else {
                return B2;
            }
        } else {
            if (n.x > 0) {
                return B4;
            } else {
                return B3;
            }
        }
    }
}

bool is_in_same_region(Point p1, Point p2) {
    if (region(p1) == region(p2) && region(p1) != NR) {
        return true;
    } else {
        return false;
    }
}

Elbette, tamamlanmış dosyayı aşağıda bulabilirsiniz:

---

# Data Type Sizes in C++

## Project Overview

This project provides a C++ program that outputs the sizes of various data types. The program demonstrates the use of the `sizeof` operator to determine the memory size of different data types and formatted output to display the results in a readable format.

## File Structure

- `main.cpp`: The main C++ source file containing the implementation.

## Requirements

- C++23 compiler (e.g., g++ with C++2b support)

## How to Compile and Run

### Compilation

To compile the program, use the following command:

```sh
g++ -std=c++2b main.cpp -o data_type_sizes
```

### Execution

To run the compiled program, use the following command:

```sh
./data_type_sizes
```

## Code Explanation

### Libraries Used

```cpp
#include <iostream>
#include <iomanip>
#include <cstdint>
```

- `<iostream>`: Provides basic input and output services.
- `<iomanip>`: Provides facilities to manipulate input and output formatting.
- `<cstdint>`: Defines sets of integer types with specified widths.

### Program Details
**Main Function**

The `main` function defines the various data types and their pointers, then uses the `sizeof` operator to display their sizes.

#### Variable Definitions

The program defines several types of variables, including integer types, floating-point types, character types, and pointers to these types.

##### Integer Types

- `int`: Basic integer type. Typically 4 bytes on most systems.
- `unsigned int`: Unsigned integer type. Can store only non-negative values.
- `short`: Short integer type. Typically 2 bytes.
- `long`: Long integer type. Typically 8 bytes on most systems.
- `long long`: Extended long integer type. Typically 8 bytes.
- `size_t`: Unsigned type for representing the size of objects. Defined in `<cstddef>`.
- `int8_t`, `int16_t`, `int32_t`, `int64_t`: Fixed-width signed integer types defined in `<cstdint>`.
- `uint8_t`, `uint16_t`, `uint32_t`, `uint64_t`: Fixed-width unsigned integer types defined in `<cstdint>`.
- `int_fast8_t`, `int_fast16_t`, `int_fast32_t`, `int_fast64_t`: Fastest minimum-width signed integer types defined in `<cstdint>`.
- `uint_fast8_t`, `uint_fast16_t`, `uint_fast32_t`, `uint_fast64_t`: Fastest minimum-width unsigned integer types defined in `<cstdint>`.
- `int_least8_t`, `int_least16_t`, `int_least32_t`, `int_least64_t`: Smallest minimum-width signed integer types defined in `<cstdint>`.
- `uint_least8_t`, `uint_least16_t`, `uint_least32_t`, `uint_least64_t`: Smallest minimum-width unsigned integer types defined in `<cstdint>`.
- `intmax_t`: Maximum-width signed integer type defined in `<cstdint>`.
- `uintmax_t`: Maximum-width unsigned integer type defined in `<cstdint>`.
- `intptr_t`: Signed integer type capable of holding a pointer.
- `uintptr_t`: Unsigned integer type capable of holding a pointer.

##### Floating-Point Types

- `float`: Single precision floating-point type. Typically 4 bytes.
- `double`: Double precision floating-point type. Typically 8 bytes.
- `long double`: Extended precision floating-point type. Typically 8, 12, or 16 bytes depending on the system.

##### Character Types

- `char`: Basic character type. Typically 1 byte.
- `unsigned char`: Unsigned character type. Typically 1 byte.
- `signed char`: Signed character type. Typically 1 byte.
- `wchar_t`: Wide character type. Size varies, but typically 2 or 4 bytes.
- `char8_t`: UTF-8 character type (since C++20). Typically 1 byte.
- `char16_t`: UTF-16 character type (since C++11). Typically 2 bytes.
- `char32_t`: UTF-32 character type (since C++11). Typically 4 bytes.

##### Pointer Types

The program also defines pointers to each of these types to demonstrate the size of pointer variables.

#### Formatting and Output

The program sets the width for the output columns to ensure the sizes are displayed neatly.

```cpp
const int typeWidth = 40;
const int sizeWidth = 30;
```

The program uses `std::cout` along with `std::setw` from `<iomanip>` to format the output.

#### Example Output

```plaintext
Type                                   Size (bytes)
---------------------------------------------------
int                                    4
unsigned int                           4
short                                  2
long                                   8
long long                              8
size_t                                 8
int8_t                                 1
int16_t                                2
int32_t                                4
int64_t                                8
uint8_t                                1
uint16_t                               2
uint32_t                               4
uint64_t                               8
int_fast8_t                            1
int_fast16_t                           2
int_fast32_t                           4
int_fast64_t                           8
int_least8_t                           1
int_least16_t                          2
int_least32_t                          4
int_least64_t                          8
uint_fast8_t                           1
uint_fast16_t                          2
uint_fast32_t                          4
uint_fast64_t                          8
uint_least8_t                          1
uint_least16_t                         2
uint_least32_t                         4
uint_least64_t                         8
intmax_t                               8
uintmax_t                              8
intptr_t                               8
uintptr_t                              8
float                                  4
double                                 8
long double                            16
char                                   1
unsigned char                          1
signed char                            1
wchar_t                                4
char8_t                                1
char16_t                               2
char32_t                               4
int*                                   8
unsigned int*                          8
short*                                 8
long*                                  8
long long*                             8
size_t*                                8
int8_t*                                8
uint8_t*                               8
int16_t*                               8
uint16_t*                              8
```
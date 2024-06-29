#include <iostream>
#include <iomanip> 
#include <cstdint>
/**
 * İTÜ Solar Car Team
 * Nisa Çontay
 * 08.06.2024
**/
/*
    cpp23+ is used to compile the code.
    g++ -std=c++2b main.cpp
    ./a.out
*/
int main() {
    // Define the width for the columns
    const int typeWidth = 40;
    const int sizeWidth = 30;

    // Define the variables
    int integer;
    unsigned int unsigned_integer;
    short short_integer;
    long long_integer;
    long long long_long_integer;
    size_t size_t_integer;
    int8_t int8_integer;
    int16_t int16_integer;
    int32_t int32_integer;
    int64_t int64_integer;
    uint8_t uint8_integer;
    uint16_t uint16_integer;
    uint32_t uint32_integer;
    uint64_t uint64_integer;
    int_fast8_t fast8_int;
    int_fast16_t fast16_int;
    int_fast32_t fast32_int;
    int_fast64_t fast64_int;
    int_least8_t least8_int;
    int_least16_t least16_int;
    int_least32_t least32_int;
    int_least64_t least64_int;
    uint_fast8_t ufast8_int;
    uint_fast16_t ufast16_int;
    uint_fast32_t ufast32_int;
    uint_fast64_t ufast64_int;
    uint_least8_t uleast8_int;
    uint_least16_t uleast16_int;
    uint_least32_t uleast32_int;
    uint_least64_t uleast64_int;
    intmax_t intmax_int;
    uintmax_t uintmax_int;
    intptr_t intptr_int;
    uintptr_t uintptr_int;

    float float_;
    double double_;
    long double long_double_;

    char char_;
    unsigned char unsigned_char;
    signed char signed_char;

    wchar_t wchar_t_char;
    char8_t char8_t_char;
    char16_t char16_t_char;
    char32_t char32_t_char;

    //pointers of variables
    int* ptrInt = &integer;
    unsigned int* ptrUInt= &unsigned_integer;
    short* ptrShort = &short_integer;
    long* ptrLong = &long_integer;
    long long* ptrLongLong = &long_long_integer;
    size_t* ptrSizeT = &size_t_integer;
    int8_t* ptrInt8 = &int8_integer; 
    uint8_t* ptrUInt8 = &uint8_integer;
    int16_t* ptrInt16 = &int16_integer;
    uint16_t* ptrUInt16 = &uint16_integer;
    int32_t* ptrInt32 = &int32_integer;
    uint32_t* ptrUInt32 = &uint32_integer;
    int64_t* ptrInt64 = &int64_integer;
    uint64_t* ptrUInt64 = &uint64_integer;
    int_fast8_t* ptrFast8 = &fast8_int;
    int_fast16_t* ptrFast16 = &fast16_int;
    int_fast32_t* ptrFast32 = &fast32_int;
    int_fast64_t* ptrFast64 = &fast64_int;
    uint_fast8_t* ptrUFast8 = &ufast8_int;
    uint_fast16_t* ptrUFast16 = &ufast16_int;
    uint_fast32_t* ptrUFast32 = &ufast32_int;
    uint_fast64_t* ptrUFast64 = &ufast64_int;
    int_least8_t* ptrLeast8 = &least8_int;
    int_least16_t* ptrLeast16 = &least16_int;
    int_least32_t* ptrLeast32 = &least32_int;
    int_least64_t* ptrLeast64 = &least64_int;
    uint_least8_t* ptrULeast8 = &uleast8_int;
    uint_least16_t* ptrULeast16 = &uleast16_int;
    uint_least32_t* ptrULeast32 = &uleast32_int;
    uint_least64_t* ptrULeast64 = &uleast64_int;
    intmax_t* ptrIntMax = &intmax_int;
    uintmax_t* ptrUIntMax = &uintmax_int;
    intptr_t* ptrIntPtr = &intptr_int;
    uintptr_t* ptrUIntPtr = &uintptr_int;
    float* ptrFloat = &float_;
    double* ptrDouble = &double_;
    long double* ptrLongDouble = &long_double_;
    char* ptrChar = &char_;
    unsigned char* ptrUChar = &unsigned_char;
    signed char* ptrSChar = &signed_char;
    wchar_t* ptrWChar = &wchar_t_char;
    char8_t* ptrChar8 = &char8_t_char;
    char16_t* ptrChar16 = &char16_t_char;
    char32_t* ptrChar32 = &char32_t_char;

    // Header
    std::cout << std::string(typeWidth + sizeWidth + 20, '-') << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "Type"
              << std::right << std::setw(sizeWidth + 5) << "Size (bytes)" << std::endl;
    std::cout << std::string(typeWidth + sizeWidth + 20, '-') << std::endl;

    // Standard integer types
    std::cout << std::left << std::setw(typeWidth) << "int"
              << std::right << std::setw(sizeWidth) << sizeof(integer) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "unsigned int"
              << std::right << std::setw(sizeWidth) << sizeof(unsigned_integer) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "short"
              << std::right << std::setw(sizeWidth) << sizeof(short_integer) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "long"
              << std::right << std::setw(sizeWidth) << sizeof(long_integer) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "long long"
              << std::right << std::setw(sizeWidth) << sizeof(long_long_integer) << std::endl;

    std::cout << std::string(typeWidth + sizeWidth + 20, '-') << std::endl;

    // Fixed-width integer types
    std::cout << std::left << std::setw(typeWidth) << "size_t"
              << std::right << std::setw(sizeWidth) << sizeof(size_t_integer) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int8_t"
              << std::right << std::setw(sizeWidth) << sizeof(int8_integer) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int16_t"
              << std::right << std::setw(sizeWidth) << sizeof(int16_integer) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int32_t"
              << std::right << std::setw(sizeWidth) << sizeof(int32_integer) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int64_t"
              << std::right << std::setw(sizeWidth) << sizeof(int64_integer) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint8_t"
              << std::right << std::setw(sizeWidth) << sizeof(uint8_integer) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint16_t"
              << std::right << std::setw(sizeWidth) << sizeof(uint16_integer) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint32_t"
              << std::right << std::setw(sizeWidth) << sizeof(uint32_integer) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint64_t"
              << std::right << std::setw(sizeWidth) << sizeof(uint64_integer) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int_fast8_t"
              << std::right << std::setw(sizeWidth) << sizeof(fast8_int) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int_fast16_t"
              << std::right << std::setw(sizeWidth) << sizeof(fast16_int) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int_fast32_t"
              << std::right << std::setw(sizeWidth) << sizeof(fast32_int) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int_fast64_t"
              << std::right << std::setw(sizeWidth) << sizeof(fast64_int) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint_fast8_t"
              << std::right << std::setw(sizeWidth) << sizeof(ufast8_int) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint_fast16_t"
              << std::right << std::setw(sizeWidth) << sizeof(ufast16_int) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint_fast32_t"
              << std::right << std::setw(sizeWidth) << sizeof(ufast32_int) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint_fast64_t"
              << std::right << std::setw(sizeWidth) << sizeof(ufast64_int) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int_least8_t"
              << std::right << std::setw(sizeWidth) << sizeof(least8_int) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int_least16_t"
              << std::right << std::setw(sizeWidth) << sizeof(least16_int) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int_least32_t"
              << std::right << std::setw(sizeWidth) << sizeof(least32_int) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int_least64_t"
              << std::right << std::setw(sizeWidth) << sizeof(least64_int) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint_least8_t"
              << std::right << std::setw(sizeWidth) << sizeof(uleast8_int) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint_least16_t"
              << std::right << std::setw(sizeWidth) << sizeof(uleast16_int) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint_least32_t"
              << std::right << std::setw(sizeWidth) << sizeof(uleast32_int) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint_least64_t"
              << std::right << std::setw(sizeWidth) << sizeof(uleast64_int) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "intmax_t"
              << std::right << std::setw(sizeWidth) << sizeof(intmax_t) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uintmax_t"
              << std::right << std::setw(sizeWidth) << sizeof(uintmax_t) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "intptr_t"
              << std::right << std::setw(sizeWidth) << sizeof(intptr_t) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uintptr_t"
              << std::right << std::setw(sizeWidth) << sizeof(uintptr_t) << std::endl;

    std::cout << std::string(typeWidth + sizeWidth + 20, '-') << std::endl;

    // Floating-point types
    std::cout << std::left << std::setw(typeWidth) << "float"
              << std::right << std::setw(sizeWidth) << sizeof(float_) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "double"
              << std::right << std::setw(sizeWidth) << sizeof(double_) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "long double"
              << std::right << std::setw(sizeWidth) << sizeof(long_double_) << std::endl;

    std::cout << std::string(typeWidth + sizeWidth + 20, '-') << std::endl;

    // Character types
    std::cout << std::left << std::setw(typeWidth) << "char"
              << std::right << std::setw(sizeWidth) << sizeof(char_) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "unsigned char"
              << std::right << std::setw(sizeWidth) << sizeof(unsigned_char) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "signed char"
              << std::right << std::setw(sizeWidth) << sizeof(signed_char) << std::endl;

    std::cout << std::string(typeWidth + sizeWidth + 20, '-') << std::endl;

    // Fixed-width character types
    std::cout << std::left << std::setw(typeWidth) << "wchar_t"
              << std::right << std::setw(sizeWidth) << sizeof(wchar_t_char) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "char8_t"
              << std::right << std::setw(sizeWidth) << sizeof(char8_t_char) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "char16_t"
              << std::right << std::setw(sizeWidth) << sizeof(char16_t_char) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "char32_t"
              << std::right << std::setw(sizeWidth) << sizeof(char32_t_char) << std::endl;

    std::cout << std::string(typeWidth + sizeWidth + 20, '-') << std::endl;

    // Pointers
    std::cout << std::left << std::setw(typeWidth) << "integer pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrInt) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "unsigned int pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrUInt) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "short pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrShort) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "long pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrLong) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "long long pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrLongLong) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "SizeT pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrSizeT) << std::endl; 
    std::cout << std::left << std::setw(typeWidth) << "int8 pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrInt8) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint8 pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrUInt8) << std::endl; 
    std::cout << std::left << std::setw(typeWidth) << "int16 pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrInt16) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint16 pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrUInt16) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int32 pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrInt32) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint32 pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrUInt32) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int16 pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrInt16) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint64 pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrUInt64) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int_fast8 pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrFast8) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int_fast16 pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrFast16) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int_fast32 pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrFast32) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int_fast64 pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrFast64) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint_fast8 pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrUFast8) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint_fast16 pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrUFast16) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint_fast32 pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrUFast32) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint_fast64 pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrUFast64) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int_least8 pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrLeast8) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int_least16 pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrLeast16) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int_least32 pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrLeast32) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "int_least64 pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrLeast64) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint_least8 pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrULeast8) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint_least16 pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrULeast16) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint_least32 pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrULeast32) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uint_least64 pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrULeast64) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "intmax pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrIntMax) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uintmax pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrUIntMax) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "intptr pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrIntPtr) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "uintptr pointer"
                << std::right << std::setw(sizeWidth) << sizeof(ptrUIntPtr) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "float pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrFloat) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "double pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrDouble) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "long double pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrLongDouble) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "char pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrChar) << std::endl; 
    std::cout << std::left << std::setw(typeWidth) << "unsigned char pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrUChar) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "wchar pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrWChar) << std::endl; 
    std::cout << std::left << std::setw(typeWidth) << "char8 pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrChar8) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "char16 pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrChar16) << std::endl;
    std::cout << std::left << std::setw(typeWidth) << "char32 pointer"
              << std::right << std::setw(sizeWidth) << sizeof(ptrChar32) << std::endl;
    
    std::cout << std::string(typeWidth + sizeWidth + 20, '-') << std::endl;

    // Max and Min values of Types
    std::cout << std::left << std::setw(typeWidth) << "Type"
              << std::setw(sizeWidth) << "Minimum Value"
              << std::setw(sizeWidth) << "Maximum Value" << "\n";
    std::cout << std::string(typeWidth + sizeWidth + 20, '-') << std::endl;

    //Integer Types
    std::cout << std::left << std::setw(typeWidth) << "int"
              << std::setw(sizeWidth) << std::numeric_limits<int>::min()
              << std::setw(sizeWidth) << std::numeric_limits<int>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "unsigned int"
              << std::setw(sizeWidth) << std::numeric_limits<unsigned int>::min()
              << std::setw(sizeWidth) << std::numeric_limits<unsigned int>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "short"
              << std::setw(sizeWidth) << std::numeric_limits<short>::min()
              << std::setw(sizeWidth) << std::numeric_limits<short>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "long"
              << std::setw(sizeWidth) << std::numeric_limits<long>::min()
              << std::setw(sizeWidth) << std::numeric_limits<long>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "long long"
              << std::setw(sizeWidth) << std::numeric_limits<long long>::min()
              << std::setw(sizeWidth) << std::numeric_limits<long long>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "int8_t" // sıkıntı var
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<int8_t>::min())
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<int8_t>::max()) << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "int16_t"
              << std::setw(sizeWidth) << std::numeric_limits<int16_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<int16_t>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "int32_t"
              << std::setw(sizeWidth) << std::numeric_limits<int32_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<int32_t>::max() << std::endl;
    
    std::cout << std::left << std::setw(typeWidth) << "int64_t"
              << std::setw(sizeWidth) << std::numeric_limits<int64_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<int64_t>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "uint8_t" // sıkıntı var
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<uint8_t>::min())
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<uint8_t>::max()) << std::endl;
    
    std::cout << std::left << std::setw(typeWidth) << "uint16_t"
              << std::setw(sizeWidth) << std::numeric_limits<uint16_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<uint16_t>::max() << std::endl;
    
    std::cout << std::left << std::setw(typeWidth) << "uint32_t"
              << std::setw(sizeWidth) << std::numeric_limits<uint32_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<uint32_t>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "uint64_t"
              << std::setw(sizeWidth) << std::numeric_limits<uint64_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<uint64_t>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "int_fast8_t" // sıkıntı var
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<int_fast8_t>::min())
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<int_fast8_t>::max()) << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "int_fast16_t"
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<int_fast16_t>::min())
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<int_fast16_t>::max()) << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "int_fast32_t"
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<int_fast32_t>::min())
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<int_fast32_t>::max()) << std::endl;
    
    std::cout << std::left << std::setw(typeWidth) << "int_fast64_t"
              << std::setw(sizeWidth) << std::numeric_limits<int_fast64_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<int_fast64_t>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "uint_fast8_t" // sıkıntı var
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<uint_fast8_t>::min())
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<uint_fast8_t>::max()) << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "uint_fast16_t"
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<uint_fast16_t>::min())
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<uint_fast16_t>::max()) << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "uint_fast32_t"
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<uint_fast32_t>::min())
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<uint_fast32_t>::max()) << std::endl;
    
    std::cout << std::left << std::setw(typeWidth) << "uint_fast64_t"
              << std::setw(sizeWidth) << std::numeric_limits<uint_fast64_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<uint_fast64_t>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "int_least8_t" // sıkıntı var
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<int_least8_t>::min())
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<int_least8_t>::max()) << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "int_least16_t"
              << std::setw(sizeWidth) << std::numeric_limits<int_least16_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<int_least16_t>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "int_least32_t"
              << std::setw(sizeWidth) << std::numeric_limits<int_least32_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<int_least32_t>::max() << std::endl;
    
    std::cout << std::left << std::setw(typeWidth) << "int_least64_t"
              << std::setw(sizeWidth) << std::numeric_limits<int_least64_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<int_least64_t>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "uint_least8_t" // sıkıntı var
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<uint_least8_t>::min())
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<uint_least8_t>::max()) << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "uint_least16_t"
              << std::setw(sizeWidth) << std::numeric_limits<uint_least16_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<uint_least16_t>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "uint_least32_t"
              << std::setw(sizeWidth) << std::numeric_limits<uint_least32_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<uint_least32_t>::max() << std::endl;
    
    std::cout << std::left << std::setw(typeWidth) << "uint_least64_t"
              << std::setw(sizeWidth) << std::numeric_limits<uint_least64_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<uint_least64_t>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "intmax_t"
              << std::setw(sizeWidth) << std::numeric_limits<intmax_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<intmax_t>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "uintmax_t"
              << std::setw(sizeWidth) << std::numeric_limits<uintmax_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<uintmax_t>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "intptr_t"
              << std::setw(sizeWidth) << std::numeric_limits<intptr_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<intptr_t>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "uintptr_t"
              << std::setw(sizeWidth) << std::numeric_limits<uintptr_t>::min()
              << std::setw(sizeWidth) << std::numeric_limits<uintptr_t>::max() << std::endl;
    
    // Floating-point types
    std::cout << std::string(typeWidth + sizeWidth + 20, '-') << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "float"
              << std::setw(sizeWidth) << std::numeric_limits<float>::min()
              << std::setw(sizeWidth) << std::numeric_limits<float>::max() << std::endl;
    
    std::cout << std::left << std::setw(typeWidth) << "double"
              << std::setw(sizeWidth) << std::numeric_limits<double>::min()
              << std::setw(sizeWidth) << std::numeric_limits<double>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "long double"
              << std::setw(sizeWidth) << std::numeric_limits<long double>::min()
              << std::setw(sizeWidth) << std::numeric_limits<long double>::max() << std::endl;

    // Character type
    std::cout << std::string(typeWidth + sizeWidth + 20, '-') << std::endl;
    
    std::cout << std::left << std::setw(typeWidth) << "char" 
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<char>::min())
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<char>::max()) << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "signed char" 
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<signed char>::min())
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<signed char>::max()) << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "unsigned char" 
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<unsigned char>::min())
              << std::setw(sizeWidth) << static_cast<int>(std::numeric_limits<unsigned char>::max()) << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "wchar"
              << std::setw(sizeWidth) << +std::numeric_limits<wchar_t>::min()
              << std::setw(sizeWidth) << +std::numeric_limits<wchar_t>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "char8_t"
              << std::setw(sizeWidth) << +std::numeric_limits<char8_t>::min()
              << std::setw(sizeWidth) << +std::numeric_limits<char8_t>::max() << std::endl;

    std::cout << std::left << std::setw(typeWidth) << "char16_t"
              << std::setw(sizeWidth) << +std::numeric_limits<char16_t>::min()
              << std::setw(sizeWidth) << +std::numeric_limits<char16_t>::max() << std::endl;

    return 0;
}

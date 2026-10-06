#include <iostream>

int main() {
    int decimal = 42;                  // десятичная запись
    int octal = 052;                   // восьмеричная запись
    int binary = 0b101010;             // двоичная запись
    int hexadecimal = 0x2A;            // шестнадцатеричная запись

    unsigned int unsignedValue = 42U;
    long int longValue = 42L;
    unsigned long int unsignedLong = 42UL;
    long long int longLongValue = 42LL;
    unsigned long long int unsignedLongLong = 42ULL;

    long int negativeValue = -42L;
    unsigned long long int largeHex = 0xFFFFFFFFFFFFFFFFULL;

    std::cout << decimal << ' ' << octal << ' '
              << binary << ' ' << hexadecimal << '\n';
    std::cout << unsignedValue << ' ' << longValue << ' '
              << unsignedLong << ' ' << longLongValue << ' '
              << unsignedLongLong << '\n';
    std::cout << negativeValue << '\n';
    std::cout << largeHex << '\n';

    return 0;
}
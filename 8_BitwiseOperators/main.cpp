//Basic - bitwise operators
#include <iostream>
#include <bitset>
int main() {
    unsigned char value1 {0x3}; // 0000 0011
    unsigned char value2 {0x5}; // 0000 0101

    std::cout << "Value 1 : " << std::bitset<8>(value1) << std::endl;
    std::cout << "Value 2 : " << std::bitset<8>(value2) << std::endl;
    //bitwise AND (&)
    std::cout << "BITWISE AND: " << std::endl;
    std::cout << std::bitset<8>(value1 & value2) << std::endl;
    //bitwise OR (|)
    std::cout << "BITWISE OR: " << std::endl;
    std::cout << std::bitset<8>(value1 | value2) << std::endl;
    //bitwise NOT (~)
    std::cout << "BITWISE NOT: " << std::endl;
    std::cout << std::bitset<8>(~value1) << std::endl;
    std::cout << std::bitset<8>(~value2) << std::endl;
    //bitwise XOR (^)
    std::cout << "BITWISE AND: " << std::endl;
    std::cout << std::bitset<8>(value1 ^ value2) << std::endl;
    return 0;
}

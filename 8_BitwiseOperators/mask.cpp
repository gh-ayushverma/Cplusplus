#include <iostream>
#include <iomanip>
#include <bitset>

int main() {

    const unsigned char mask_bit_0 {0b00000001}; //Bit0
    const unsigned char mask_bit_1 {0b00000010}; //Bit1
    const unsigned char mask_bit_2 {0b00000100}; //Bit2
    const unsigned char mask_bit_3 {0b00001000}; //Bit3
    const unsigned char mask_bit_4 {0b00010000}; //Bit4
    const unsigned char mask_bit_5 {0b00100000}; //Bit5
    const unsigned char mask_bit_6 {0b01000000}; //Bit6
    const unsigned char mask_bit_7 {0b10000000}; //Bit7

    unsigned char var {0b00000000};
    std::cout << "Var : " << std::bitset<8>(var) << std::endl;

    //Set bit 1
    std::cout << "Setting bit in position 1" << std::endl;
    var |= mask_bit_1;
    std::cout << "var : " << std::bitset<8>(var) << std::endl;

    //Set bit 2
    std::cout << "Setting bit in position 2" << std::endl;
    var |= mask_bit_2;
    std::cout << "var : " << std::bitset<8>(var) << std::endl;

    //Set bit 3
    std::cout << "Setting bit in position 3" << std::endl;
    var |= mask_bit_3;
    std::cout << "var : " << std::bitset<8>(var) << std::endl;
    return 0;
}
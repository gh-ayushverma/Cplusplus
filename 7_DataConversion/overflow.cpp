#include <iostream>

int main() {
    unsigned char data {250};
    ++data;
    std::cout <<"Data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout <<"Data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout <<"Data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout <<"Data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout <<"Data : " << static_cast<int>(data) << std::endl;

    ++data;
    std::cout <<"Data : " << static_cast<int>(data) << std::endl;
    return 0;
}
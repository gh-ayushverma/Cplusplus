#include <iostream>

int main() {
    
    constexpr int SOME_LIB_MAJOR_VERSION {123};
    
    constexpr int eye_count {2};

    constexpr double PI {3.14};

    std::cout << "eye count : " << eye_count << std::endl;
    std::cout << "PI : " << PI << std::endl;

    return 0;
}
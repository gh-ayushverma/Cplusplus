#include <iostream>

int main() {
    //Implicit cast.
    double x {12.5};
    double y {34.6};

    int sum = x + y;

    std::cout << "The sum is : " << sum << std::endl;

    //Explicit cast
    sum = static_cast<int>(x) + static_cast<int>(y);

    std::cout << "The sum is : " << sum << std::endl;
    return 0;
}

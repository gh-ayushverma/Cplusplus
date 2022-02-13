#include <iostream>

int main() {
    //Braced initializers
    int elephant_count;

    int lion_count {}; // initialize to zero

    int dog_count {10}; //Initialize to 10

    int cat_count {15}; //Initialize to 15

    //Can use expression as Initializer
    int domesticated_animals {dog_count + cat_count};

    std::cout << "Elephant count : " << elephant_count << std::endl;
    std::cout << "Lion count : " << lion_count << std::endl;
    std::cout << "Dog count : " << dog_count << std::endl;
    std::cout << "Cat count : " << cat_count << std::endl;
    std::cout << "Domesticated animal count : " << domesticated_animals << std::endl;
    return 0;
}
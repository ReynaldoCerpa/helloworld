#include <iostream>
#include <string>

int main() {
    std::string cars[] = {};
    cars[0] = "BMW";

    for (size_t i = 0; i <= sizeof(cars); i++) {
        std::cout << cars[i] << std::endl;
    }
    return 0; 
}
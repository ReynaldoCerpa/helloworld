#include <iostream>
#include <string>
int Multiply(int a, int b) {
    return a * b;
}

void logMultiply() {
    int result = Multiply(8,8);
    std::cout << result << std::endl;
}

int main() {
    logMultiply();
    std::string mem = "Hola";
    std::cout << mem;
    return 0;
}
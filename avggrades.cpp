#include <iostream>

int main() {
 
    system("clear");
    int num1, num2, num3, num4, num5, num6, sum;

    std::cout << "Enter your 6 grades: ";
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5 >> num6;

    sum = num1 + num2 + num3 + num4 + num5 + num6;

    std::cout.precision(2);
    std::cout << "Your final grade is: " << sum / 6 << std::endl; 

}
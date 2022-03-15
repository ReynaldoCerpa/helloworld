#include <iostream>
#include <string.h>

int main() {
    char msg[100], ch;
    int i, key;

    std::cout << "Enter message: ";
    std::cin >> msg;
    std::cout << "Enter key: ";
    std::cin >> key;

    for (i = 0; i < strlen(msg); i++) {
    
       msg[i] = int(msg[i]) + key;

    }
    
    std::cout << "Encrypted message: " << msg <<std::endl;

    return 0;

}
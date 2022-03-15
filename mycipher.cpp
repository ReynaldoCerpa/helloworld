#include <iostream>
#include <string.h>
void cipher();
void decipher();

/*
    To run this program use a compiler like g++ 
    example (linux): g++ mycipher.cpp -o mycipher
*/

int main() {

    std::string option;

    system("clear");

    while (option != "3")
    {
        std::cout << " -- Select and option -- " << std::endl;
        std::cout << "1) Cipher" << std::endl;
        std::cout << "2) Decipher" << std::endl;
        std::cout << "3) Exit\n" << std::endl;

        std::cin >> option;
        if (option == "1") {
            cipher();
        } else if (option == "2") {
            decipher();
        }
    }
    
    return 0;
}

void cipher() {
    char ch, msg[50];
    int key, i;

    std::cout << "Enter message: ";
    std::cin >> msg;
    std::cout << "Enter key: ";
    std::cin >> key;

    for (i = 0; i < strlen(msg); i++) {
    
       msg[i] = int(msg[i]) + key;

    }
    
    std::cout << "\nEncrypted message: " << msg << "\n" <<std::endl;
}

void decipher() {
    char ch, msg[50];
    int key, i;

    std::cout << "Enter message: ";
    std::cin >> msg;
    std::cout << "Enter key: ";
    std::cin >> key;

    for (i = 0; i < strlen(msg); i++) {
    
       msg[i] = int(msg[i]) - key;

    }
    
    std::cout << "\nEncrypted message: " << msg << "\n" <<std::endl;
}
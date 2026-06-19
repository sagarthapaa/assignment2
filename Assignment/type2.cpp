#include <iostream>

int main() {
    double pi = 3.14159;
    int piInt = (int)pi;                   
    std::cout << "C-style cast: " << piInt << std::endl;

    char ch = 'A';
    int ascii = int(ch);                   
    std::cout << "ASCII of A: " << ascii << std::endl;
    return 0;
}
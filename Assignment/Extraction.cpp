// Program 2: Reading string and number
#include <iostream>
#include <string>

int main() {
    std::string name;
    int age;
    std::cout << "Enter your name and age: ";
    std::cin >> name >> age;  // Extraction for string and int
    std::cout << "Hello, " << name << "! You are " << age << " years old." << std::endl;
    return 0;
}
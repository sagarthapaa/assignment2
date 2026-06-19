#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;  // Using extraction operator
    std::cout << "Sum: " << (num1 + num2) << std::endl;
    return 0;
}
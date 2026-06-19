#include <iostream>

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (num > 0) {
        std::cout << "Positive" << std::endl;
    } else if (num < 0) {  // Note: this uses else if, but main logic is if-else
        std::cout << "Negative" << std::endl;
    } else {
        std::cout << "Zero" << std::endl;
    }
    return 0;
}
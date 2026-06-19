#include <iostream>

int main() {
    int marks;
    std::cout << "Enter marks (0-100): ";
    std::cin >> marks;
    if (marks >= 90) {
        std::cout << "Grade: A" << std::endl;
    } else if (marks >= 80) {
        std::cout << "Grade: B" << std::endl;
    } else if (marks >= 70) {
        std::cout << "Grade: C" << std::endl;
    } else if (marks >= 60) {
        std::cout << "Grade: D" << std::endl;
    } else {
        std::cout << "Grade: F" << std::endl;
    }
    return 0;
}
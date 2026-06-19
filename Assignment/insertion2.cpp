#include <iostream>
#include <iomanip>

int main() {
    double pi = 3.14159;
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Pi approximated to 2 decimals: " << pi << std::endl;  // Insertion with manipulators
    return 0;
}
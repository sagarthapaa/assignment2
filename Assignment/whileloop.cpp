#include <iostream>

int main() {
    int count;
    std::cout << "Enter starting count: ";
    std::cin >> count;
    while (count > 0) {  // while loop
        std::cout << count << " ";
        --count;
    }
    std::cout << "Go!" << std::endl;
    return 0;
}
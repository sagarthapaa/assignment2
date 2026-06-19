#include <iostream>

int main() {
    int num, sum = 0;
    std::cout << "Enter numbers (0 to stop):" << std::endl;
    while (true) {
        std::cin >> num;
        if (num == 0) break;
        sum += num;
    }
    std::cout << "Total sum: " << sum << std::endl;
    return 0;
}
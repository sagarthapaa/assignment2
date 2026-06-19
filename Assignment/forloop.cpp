#include <iostream>

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    for (int i = 1; i <= n; ++i) {  // for loop
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}
#include <iostream>

int main() {
    int a = 5;
    double b = 3.7;
    double sum = a + b;                    
    std::cout << "Implicit sum: " << sum << std::endl;

    int result = static_cast<int>(b);      
    std::cout << "Explicit cast: " << result << std::endl;
    return 0;
}
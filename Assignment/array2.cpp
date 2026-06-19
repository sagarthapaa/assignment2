#include <iostream>

int main() {
    int numbers[] = {5, 12, 3, 8, 9};
    int size = 5;
    int max = numbers[0];
    for (int i = 1; i < size; ++i) {
        if (numbers[i] > max) {
            max = numbers[i];
        }
    }
    std::cout << "Maximum value: " << max << std::endl;
    return 0;
}
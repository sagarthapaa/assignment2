#include <iostream>

void printMessage(std::string msg) {
    std::cout << "Message: " << msg << std::endl;
}

int main() {
    printMessage("Hello from function!");
    return 0;
}
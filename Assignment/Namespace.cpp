#include <iostream>

namespace MySpace {
    void greet() {
        std::cout << "Hello from MySpace!" << std::endl;
    }
}

int main() {
    using namespace std;  // Namespace usage
    cout << "Standard namespace" << endl;
    MySpace::greet();
    return 0;
}
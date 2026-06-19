#include <iostream>

namespace First {
    void display() { std::cout << "First namespace\n"; }
}

namespace Second {
    void display() { std::cout << "Second namespace\n"; }
}

int main() {
    using namespace First;
    display();                    // First::display via using
    Second::display();            // Qualified
    return 0;
}

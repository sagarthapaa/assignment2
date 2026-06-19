#include <iostream>

int main() {
    int day;
    std::cout << "Enter day number (1-7): ";
    std::cin >> day;
    if (day == 1) {
        std::cout << "Monday" << std::endl;
    } else if (day == 2) {
        std::cout << "Tuesday" << std::endl;
    } else if (day == 3) {
        std::cout << "Wednesday" << std::endl;
    } else if (day == 4) {
        std::cout << "Thursday" << std::endl;
    } else if (day == 5) {
        std::cout << "Friday" << std::endl;
    } else if (day == 6 || day == 7) {
        std::cout << "Weekend" << std::endl;
    } else {
        std::cout << "Invalid day" << std::endl;
    }
    return 0;
}
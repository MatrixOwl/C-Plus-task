#include <iostream>
#include <string>

int main() {
    std::string a, b;
    std::cin >> a >> b;
    if (a == b) {
        std::cout << "same" << std::endl;
    } else if (a > b) {
        std::cout << a << std::endl;
    } else {
        std::cout << b << std::endl;
    }
    return 0;
}
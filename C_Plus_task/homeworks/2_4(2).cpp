#include <iostream>
#include <string>

int main() {
    std::string s1, s2;
    std::cin >> s1 >> s2;
    auto a = s1.size();
    auto b = s2.size();
    if (a == b) {
        std::cout << "same" << std::endl;
    } else if (a > b) {
        std::cout << s1 << std::endl;
    } else {
        std::cout << s2 << std::endl;
    }
    return 0;
}
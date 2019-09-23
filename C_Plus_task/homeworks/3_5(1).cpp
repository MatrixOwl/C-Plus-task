#include <iostream>
#include <string>

int main() {
    std::string s, res;
    while (std::cin >> s) {
        res += s;
    }
    std::cout << res <<std::endl;
    return 0;
}
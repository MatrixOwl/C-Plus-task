#include <iostream>
#include <typeinfo>

int main() {
    const int i = 42;
    auto j = i; auto &k = i; auto *p = &i;
    const auto j2 = i, &k2 = i;
    std::cout << "i : " << typeid(i).name() << std::endl;
    std::cout << "j : " << typeid(j).name() << std::endl;
    std::cout << "k : " << typeid(k).name() << std::endl;
    std::cout << "p : " << typeid(p).name() << std::endl;
    std::cout << "j2: " << typeid(j2).name() << std::endl;
    std::cout << "k2: " << typeid(k2).name() << std::endl;
    return 0;
}
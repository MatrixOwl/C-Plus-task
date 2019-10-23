/* Copyright [year] <Copyright Owner>*/
#include "PhoneBook.h"

int main() {
    PhoneBook test;
    test.Add("jack", "1232");
    test.Add("jack", "1244566");
    test.Add("tom", "3145667");
    test.Add("tom", "3252636677");
    test.Add("tom", "324325");
    test.Add("jack", "34556677");
    test.Remove("jack", "1232");
    std::vector<std::string> test_vector;
    test_vector = test.Find("jack");
    std::vector<std::string>::iterator t;
    for (t = test_vector.begin(); t != test_vector.end(); t++) {
        std::cout << *t << std::endl;
    }
    test.Change_data("jack", "1244566", "1234567");
    test_vector = test.Find("jack");
    for (t = test_vector.begin(); t != test_vector.end(); t++) {
        std::cout << *t << std::endl;
    }
    test.Remove("tom", "all");
    std::vector<std::string> test_vector2;
    test_vector2 = test.Find("tom");
    std::cout << test_vector2.empty() << std::endl;
    return 0;
}
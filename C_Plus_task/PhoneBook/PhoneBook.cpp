/* Copyright [year] <Copyright Owner>*/
#include "PhoneBook.h"
#include <unordered_map>
#include <iterator>
#include <vector>

typedef std::unordered_map<std::string, std::vector<std::string>>::iterator T;

void PhoneBook::Add (std::string name, std::string phone_number) {
    T it = this->PhoneBook::Book.find(name);
    if (it != PhoneBook::Book.end()) {
        it->second.push_back(phone_number);
    } else {
        std::vector<std::string> phone_num;
        phone_num.push_back(phone_number);
        PhoneBook::Book.insert(make_pair(name, phone_num));
    }
}

void PhoneBook::Remove (std::string name, std::string phone_number="all") {
    T it = this->PhoneBook::Book.find(name);
    if (phone_number == "all") {
        if (it != PhoneBook::Book.end()) {
            PhoneBook::Book.erase(it);
        } else {
            std::cerr << "There is no such name" << std::endl;
        }
    } else {
        std::vector<std::string>::iterator itc;
        for (itc = it->second.begin(); itc != it->second.end(); itc++) {
            if (*itc == phone_number) {
                it->second.erase(itc);
                break;
            }
            if (itc == it->second.end()) {
                std::cerr << "There is no such phone number" << std::endl;
            }
        }
    }
}

void PhoneBook::Change_data (std::string name, std::string before_num, std::string after_num) {
    T it = this->PhoneBook::Book.find(name);
    if (it == PhoneBook::Book.end()) {
        std::cerr << "There is no such name" << std::endl;
    }
    std::vector<std::string>::iterator itc;
    for (itc = it->second.begin(); itc != it->second.end(); itc++) {
        if (*itc == before_num) {
            //it->second.erase(itc);
            *itc = after_num;
            break;
        }
        if (itc == it->second.end()) {
            std::cerr << "There is no such phone number" << std::endl;
        }
    }
}

std::vector<std::string> PhoneBook::Find (std::string name) {
    T it = this->PhoneBook::Book.find(name);
    if (it != PhoneBook::Book.end()) {
        return it->second;
    } else {
        std::cerr << "There is no such name" << std::endl;
        std::vector<std::string> empty;
        return empty;
    }
}
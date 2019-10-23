/* Copyright [year] <Copyright Owner>*/
#ifndef PHONEBOOK_H_
#define PHONEBOOK_H_

#include <iostream>
#include <vector>
#include <unordered_map>

class PhoneBook {
 private:
   std::unordered_map<std::string, std::vector<std::string>> Book;
 public:
   void Add (std::string name, std::string phone_number);
   std::vector<std::string> Find (std::string name);
   void Remove (std::string name, std::string phone_number);
   void Change_data (std::string name, std::string before_num, std::string after_num);
};


#endif // PHONEBOOK_H_
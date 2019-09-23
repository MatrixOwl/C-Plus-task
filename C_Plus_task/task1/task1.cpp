#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

int main() {
    std::vector<std::string> all_words;
    std::string one_word;
    while (std::cin >> one_word) {
        all_words.push_back(one_word);
    }

    std::sort(all_words.begin(), all_words.end());

    for (auto& it : all_words) {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    return 0;
}

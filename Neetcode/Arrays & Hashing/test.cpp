#include <iostream>
#include <unordered_map>
#include <sstream>
#include <string>

int main() {
    std::string text = "cat dog dog cat cat bird";
    std::unordered_map<std::string, std::string> freq;

    std::stringstream ss(text);
    std::string word;
    while (ss >> word) {
        freq[word] += "hej ";
    }

    for (const auto& pair : freq) {
        std::cout << pair.first << " => " << pair.second << "\n";
    }

    return 0;
}

/*

    bird => hej 
    dog => hej hej 
    cat => hej hej hej 


*/


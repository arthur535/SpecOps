#include <iostream>
#include <unordered_map>
#include <fstream>
int main() {
    std::unordered_map<char, int> ht;
    std::string str = "/Users/arthur/Desktop/input.txt";
    
    std::ifstream fin;
    fin.open(str);
    if(!fin.is_open()) {
        std::cout << "no";
    }
    else{
        std::cout << "yes";
        while (!fin.eof())
        {
            std::string word = "";
            fin >> word;
            for(int i = 0; i < word.size(); i++) {
                ht[word[i]]++;
            }
        }
        for (int i = 65; i < 91; i++) {
            std::cout << std::endl << (char)i <<"\t" << ht[(char)i] << std::endl;
        }
    }
}

#include <iostream>

std::string strmove(std::string&, int);

int main() {
    std::string str;
    std::cout << "please input string : ";
    std::cin >> str;
    int key;
    std::cout << "please input key : ";
    std::cin >> key;
    std::cout << "result = " << strmove(str, key) << std::endl;
}

std::string strmove(std::string& str, int key){
    key %= str.size();
    std::string temp = "";
    for (int i = 0; i < key; ++i) {
        temp += str[str.size()+i-key];
    }
    int size = (int)temp.size();
    for (int i = 0; i < str.size()-size; ++i) {
        temp += str[i];
    }
    return temp;
}

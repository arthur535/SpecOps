#include <iostream>
#include <string>

std::string only_letters_and_numbers(std:: string& str) {
    for (int i = 0; i < str.length(); i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') ) {
            continue;
        }
        else if(str[i] >= 48 && str[i] <= 57){
            continue;
        }
        str.erase(i,1);
        --i;
    }
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i]+=32;
        }
    }
    return str;
}

bool polindrome(std::string str) {
    bool boolean = true;
    int size = str.length();
    for (int i = 0; i < size/2; i++) {
        if(str[i] != str[size-1-i]){
            boolean = false;
        }
    }
    return boolean;
}

int main()
{
    std::string str = "He21  llo ooLL 2eh";
    str = only_letters_and_numbers(str);
    std::cout << polindrome(str) << std::endl;
//    std::string strh = "Hh";
//    std::cout << strh[0];
//    std::cout << strh[0] +32;
//    bool b = (strh[0]) == (char)(strh[2]-32);
//    std::cout << 'b' << b;;
}




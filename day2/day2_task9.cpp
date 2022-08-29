#include <iostream>
void strset(char*, char);
int main() {
    char str[]={"azat"};
    char ch;
    std::cin >> ch;
    strset(str, ch);
    std::cout << str;
}
void strset(char* str, char ch){
    for (int i = 0; i < strlen(str); i++) {
        str[i] = ch;
    }
}

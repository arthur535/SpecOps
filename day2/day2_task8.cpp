#include <iostream>
char* strcat(char* s1, char* s2);
int main() {
    char s1[]={"azat"};
    char s2[]={"hayreniq"};
    std::cout << strcat(s1,s2);
}
char* strcat(char* s1, char* s2){
    int size = strlen(s1) + strlen(s2);
    char* ptr = new char[size];
    for (int i = 0; i < strlen(s1); i++) {
        ptr[i] = s1[i];
    }
    for (int i = strlen(s1); i < size; i++) {
        ptr[i] = s2[i-strlen(s1)];
    }
    return ptr;
}

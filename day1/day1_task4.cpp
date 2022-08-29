#include <iostream>
char* magic(char* ptr){
    const int size = strlen(ptr);
    for (int i = 0; i < size/2; i++) {
        char tmp = ptr[i];
        ptr[i] = ptr[size-1-i];
        ptr[size-1-i] = tmp;
    }
    ptr[size] = '\0';
    return ptr;
}
int main() {
    const int size = 5;
    char* ptr = new char[size];
    for (int i = 0, j = 97; i < size; i++, j++) {
        ptr[i] = j;
    }
    std::cout << magic(ptr);
    delete [] ptr;
    ptr = nullptr;
}

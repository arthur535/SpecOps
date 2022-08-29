#include <iostream>
char* dec_to_bin(unsigned int decimal){
    int remainder;
    unsigned int decimal1 = decimal;
    unsigned int decimal2 = decimal;
    int size = 0;
    while (decimal1 != 0) {
        remainder = decimal1 % 2;
        decimal1 = decimal1 / 2;
        size++;
    }
    int count_of_bytes = 1 + size/8;
    char* binary = new char [count_of_bytes];
    for (int i = 0; i < size; i++) {
        remainder = decimal2 % 2;
        binary[i] = remainder + '0';
        decimal2 /= 2;
    }
    for (int j = 0; j < size/2; j++) {
        char tmp = binary[j];
        binary[j] = binary[size-1-j];
        binary[size-1-j] = tmp;
    }
    delete[] binary;
    return binary;
}
void foo(char* arr){
    const int size = strlen(arr);
    int count_of_0 = 0;
    int count_of_1 = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] == '0') {
            count_of_0++;
        }
        else {
            count_of_1++;
        }
    }
    std::cout << "count of 0--"<<  count_of_0 << std::endl;
    std::cout << "count of 1--"<<  count_of_1 << std::endl;
}
int main() {
    unsigned int decimal;
    std::cin >> decimal;
    char* ptr = dec_to_bin(decimal);
    std::cout << dec_to_bin(decimal)<< "\t";
    foo(ptr);
    return 0;
}


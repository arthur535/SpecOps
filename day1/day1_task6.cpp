#include <iostream>
int div(int* arr, int size){
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i]%i==0) {
            std::cout << arr[i] << '\t' << i << std::endl;
            count++;
        }
    }
    return count;
}
int main() {
    int size = 12;
    int* arr = new int [size];
    for (int i = 0; i < size; i++) {
        arr[i] = i + 11;
    }
    std::cout << div(arr, size);
}

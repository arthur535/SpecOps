#include <iostream>
bool search(int size){
    bool boolean = false;
    int* arr = new int [size];
    for (int i = 0; i < size; i++) {
        arr[i] = i;
    }
    int value;
    std::cout << "give me value: ";
    std::cin >> value;
    int left = 0;
    int right = size-1;
    int middle;
    while (left <= right) {
        middle = (left + right)/2;
        std::cout << "middle--" << middle << std::endl;
        if (value == arr[middle]) {
            boolean = true;
            break;
        }
        if(value < arr[middle]){
            right = middle-1;
        }
        else{
            left = middle+1;
        }
    }
    return boolean;
}
int main() {
    int size;
    std::cout << "give me size: ";
    std::cin >> size;
    std::cout << search(size);
}

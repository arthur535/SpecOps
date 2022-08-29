#include <iostream>
int* square(int* arr, int size){
    int* arr1 = new int[size];
    for (int i = 0; i < size; i++) {
        arr1[i] = arr[i] * arr[i];
    }
    return arr1;
}
int main(){
    const int size = 6;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = rand()%10+i;
        std::cout << arr[i] << std::endl;
    }
    delete[]arr;
    arr = square(arr,size);
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << "\t";
    }
    for (int j = 0; j < size; j++) {
        int min = arr[j];
        for (int i = j; i < size; i++) {
            if (min > arr[i]) {
                std::swap(min,arr[i]);
            }
        }
        arr[j] = min;
    }
    std::cout << std::endl;
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << "\t";
    }
}



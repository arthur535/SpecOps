#include <iostream>
int* booble_sort(int*, const int);
void my_swap(int&, int&);
int main() {
    const int size = 6;
    int arr[size] = {3, 1, 8, 7, 5, 6};
    booble_sort(arr, size);
    for (int i = 0; i < size; i++) {
        std::cout << arr[i];
    }
}
int* booble_sort(int* arr, int size){
    for (int i = 0; i < size; i++) {
        for (int j = i; j < size-1; j++) {
            if (arr[j] > arr[j+1] ) {
                my_swap(arr[j+1], arr[j]);
            }
        }
    }
    return arr;
}
void my_swap(int& a, int& b){
    int temp = a;
    a = b;
    b = temp;
}

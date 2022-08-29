#include <iostream>
void my_swap(int&, int&);
int* selection_sort(int*, const int);
int main() {
    const int size = 6;
    int arr[size] = {3, 1, 5, 7, 4, 6};
    selection_sort(arr, size);
    for (int i = 0; i < size; i++) {
        std::cout << arr[i];
    }
}
int* selection_sort(int* arr, const int size){
    for (int j = 0; j < size-1; j++) {
        int min = arr[j];
        for (int i = j; i < size; ++i) {
            if (min > arr[i]) {
                std::cout << "min = " << min << std::endl;
                min = arr[i];
                my_swap(arr[i], arr[j]);
                std::cout << "min afte = " << min << std::endl;
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

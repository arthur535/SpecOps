#include <iostream>
#include <iostream>
int serch(int* arr, int size, int key);
int rec_binar_serch(int* arr, int size, int key, int low, int high );
int main() {
    int size = 5;
    int arr[5] = {2,5,8,12,21};
    std::cout << rec_binar_serch(arr, 5, 8, 0,size-1);
}
int rec_binar_serch(int* arr, int size, int key, int low, int high) {
    int mid = (low + high) / 2;
    if(arr[mid] == key) {
        return mid;
    }
    if(arr[mid] > key) {
        return rec_binar_serch(arr, size, key, low, high= mid - 1);
    }
    else {
        return rec_binar_serch(arr, size, key, low = mid + 1, high);
    }
    return 404;
}
int search(int size){
    int index;
    int* arr = new int [size];
    for (int i = 0; i < size; i++) {
        arr[i] = i*4;
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
            index = middle;
            break;
        }
        if (value < arr[middle]){
            right = middle-1;
        }
        else {
            left = middle+1;
        }
    }
    return index;
}



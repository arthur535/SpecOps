#include <iostream>
int main() {
    const int size = 6;
    int arr[size]={5,2,3,4,5,6};
    for (int i = 0;i < size ; ++i) {
        for (int j = i; j < size; j++) {
            if (arr[j] % 2 == 0) {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << std::endl;
    }
}

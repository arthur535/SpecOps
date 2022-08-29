#include <iostream>
#include <unordered_map>

int main() {
    const int size = 10;
    int arr[size];
    int count  = 0;
    std::unordered_map<int, int> ht;
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 5;
        std::cout << arr[i] << "\t";
        ht[arr[i]]++;
    }
    std::cout << std::endl;
    for(int i = 0; i < size; ++i){
        if (ht[arr[i]] == 1) {
            count++;
        }
    }
    std::cout << count;
}


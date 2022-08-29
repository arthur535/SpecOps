#include <iostream>
#include <unordered_map>

int main() {
    const int size = 10;
    int arr[size];
    std::unordered_map<int, int> ht;
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 4;
        std::cout << arr[i] << "\t";
        ht[arr[i]]++;
    }
    int x;
    std::cin >> x;
    std::cout << ht[x];
}

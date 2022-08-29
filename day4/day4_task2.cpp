#include <iostream>
#include <unordered_map>
#include <vector>
int main() {
    const int size = 10;
    int count = 0;
    int arr1[size]{2,4,6,6,4,3,7,8,9,2};
    int arr2[size]{1,2,3,4,9,9,9,2,1,3};
    std::unordered_map<int, int> ht_result;
    std::unordered_map<int, int> ht_1;
    std::unordered_map<int, int> ht_2;
    std::vector<int> vec;
    for (int i = 0; i < size; i++) {
        ht_1[arr1[i]]++;
    }
    for (int i = 0; i < size; i++) {
        if (ht_1[arr1[i]] > 1) {
            ht_1[arr1[i]] = 1;
        }
    }
    for (int i = 0; i < size; i++) {
        ht_2[arr2[i]]++;
    }
    for (int i = 0; i < size; i++) {
        if (ht_2[arr2[i]] > 1) {
            ht_2[arr2[i]] = 1;
        }
    }
    for (int i = 0; i < size; ++i) {
        ht_result[i] = ht_1[i] + ht_2[i];
        if (ht_result[i] == 2) {
            count++;
            vec.push_back(i);
        }
    }
    for (int i = 0; i < count; ++i) {
        std::cout << vec[i];
    }
}

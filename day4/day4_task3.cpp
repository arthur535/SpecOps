#include <iostream>
#include <unordered_map>
int main() {
    const int size = 6;
    int arr[size]={2,19,19,3,7,19};
    std::unordered_map<int, int> ht;
    int max = arr[0];
    for (int i = 0; i < size; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    std::cout << "max = " << max << std::endl;
    for (int i = 0; i < size; ++i) {
        ht[arr[i]]++;
    }
    int most = ht[0];
    int index;
    for (int i = 0; i <= max; ++i) {
        if (most < ht[i]) {
            most = ht[i];
            index = i;
        }
        std::cout << i << "->" << ht[i] << std::endl;
    }
    std::cout << "most = " << most << std::endl;
    std::cout << "index = " << index << std::endl;
    int arrtmp[most];
    int j = 0;
    for (int i = 0; i < max; ++i) {
        if (arr[i] == index) {
            arrtmp[j] = i;
            j++;
        }
    }
   
    int result =  arrtmp[most-1]- arrtmp[0] +1;
   // std::cout << arrtmp[4];
    std::cout << "d = " << result << std::endl;
}

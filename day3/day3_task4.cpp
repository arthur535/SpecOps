#include <iostream>
int main() {
    int sum = 0;
    for (int i = 0; i <= 100; i++) {
        sum+=i;
    }
    int sum_sq = sum*sum;
    std::cout << sum_sq << std::endl;
    sum = 0;
    for (int i = 0; i <= 100; ++i) {
        sum += (i*i);
    }
    std::cout << sum << std::endl;
    std::cout << abs(sum-sum_sq);
}

#include <iostream>
int odd(int,int);
int main(){
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << odd(num1,num2) << std::endl;

}
int odd(int low, int high){
    int count = 0;
    for (int i = low; i <= high; i++) {
        if (i % 2 == 1) {
            std::cout << i << "\t";
            count++;
        }
    }
    std::cout << std::endl << "odd numbers count = " ;
    return count;
}


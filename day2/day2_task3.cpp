#include <iostream>
int main(){
    int num;
    int sum = 0;
    std::cout << "please input number: ";
    std::cin >> num;
    while(num != 0){
        sum+=num % 10;
        num/=10;
    }
    std::cout << "sum of digits = " <<sum << std::endl;
}



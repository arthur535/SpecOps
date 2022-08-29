#include <iostream>
int main(){
    int num;
    int mul = 1;
    int sum = 0;
    std::cout << "please input number: ";
    std::cin >> num;
    while(num != 0){
        sum+=num % 10;
        mul*=num%10;
        num/=10;
    }
    int result = mul - sum;
    std::cout << "sum of digits = " << sum << std::endl;
    std::cout << "mul of digits = " << mul << std::endl;
    std::cout << "result of mul-sum = " << result << std::endl;
}




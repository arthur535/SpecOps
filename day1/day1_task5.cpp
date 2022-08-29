#include <iostream>
#include <map>
int sum(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

int divi(int a, int b){
    return a / b;
}

int main(){
    std::map<char,int(*)(int,int)> calculator;
    char op;
    std::cin >> op;
    int a,b;
    std::cin >> a >> b;
    calculator['+'] = &sum;
    calculator['-'] = &sub;
    calculator['*'] = &mul;
    calculator['/'] = &divi;
    std::cout << calculator[op](a,b);
}



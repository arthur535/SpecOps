#include <iostream>
using namespace std;
void fib(int num) {
    int x = 0, y = 1, z = 0;
    int sum = 0;
    for (int i = 0; i < num; i++) {
        while(x < 4000000){
            if (x % 2 == 0) {
                std::cout << x << " ";
                sum += x;
           }
           //cout << x << " ";
           z = x + y;
           x = y;
           y = z;
       }
   }
    std::cout << std::endl;
    std::cout << "The sum of fibonacci numbers below 4 million is: " << sum;
}
int main() {
   int num;
   cout << "\nThe even fibonacci numbers below: " ;
   fib(num);
   return 0;
}

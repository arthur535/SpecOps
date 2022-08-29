#include <iostream>
#include <vector>
int isUnique(const std::string& str) {
    unsigned table{};
    unsigned NotUnique{};
    for (auto ch : str) {
        if (table & (1 << ch-'a')) {
            NotUnique |= (1 << (ch-'a'));
        }
        table |= (1 << (ch - 'a'));
    }
//    for (auto ch : str) {
//        if (table << (ch-'a') & NotUnique << (ch - 'a')) {
//
//        }
//    }
    return table;
}
std::string toBinary(int n)
{
    std::string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}
int main() {
    std::string str = "tibran";
    isUnique(str);
    std::cout << toBinary(isUnique(str)) << std::endl;
    std::cout << toBinary(8);
     
}



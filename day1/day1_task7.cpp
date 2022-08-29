#include <iostream>
std::string to_upper_case(std::string name){
    for (int i = 0; i < name.size() ;i++) {
        if ((name[i] >= (int)'a') && (name[i] <=(int)'z')) {
            name[i]-=((int)'a' - (int)'A');
        }
    }
    return name;
}
int main() {
    std::string str;
    std::cin >> str;
    std::cout << to_upper_case(str);
}

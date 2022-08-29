#include <iostream>
#include <fstream>
#include <string>
int my_stoi(std::string);
int main() {
    std::string line;
    int result = 0;
    std::ifstream myfile("/Users/arthur/Desktop/input.txt");
    
    if(myfile.is_open()) {
        while (std::getline (myfile, line) ) {
           result = result + my_stoi(line);
        }
        myfile.close();
    }
    else{
        std::cout << -1;
    }
    std::cout << result;
}
int my_stoi(std::string str) {
    int res=0;
    for(int i = 0; i < str.size(); ++i) {
        res+=(int)str[i] - '0';
        res*=10;
    }
    return res/10;
}

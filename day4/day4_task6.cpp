#include <iostream>
#include <unordered_map>

int main() {
    std::string needle = "ll";
    std::string haystack = "hello";
    int index  = haystack.find(needle);
    if (index >= 0 && index < haystack.size()) {
        std::cout << index;
    }
    else{
        std::cout <<  -1;
    }
    
}


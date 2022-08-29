#include <iostream>
#include <fstream>
const unsigned int max  = 10;
struct {
    int x : 8;
}s;
int main() {
    std::ofstream fout;
    fout.open("/Users/arthur/Desktop/hello.txt");
    if (!fout.is_open()) {
        std::cout << "file is not open:\n";
    }
    for (int i = 0; i < max; i++) {
        fout << rand() % 201;
    }
        fout.close();
}



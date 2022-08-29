#include <iostream>
#include <fstream>
int main() {
    std::ifstream fin;
    std::ofstream fout;
    fin.open("/Users/arthur/Desktop/input.txt");
    fout.open("/Users/arthur/Desktop/output.txt");
    if (!fin.is_open()) {
        std::cout << "file is not open" << std::endl;
    } else {
        std::cout << "file is open: ";
        while (!fin.eof()) {
            std::string str = "";
            fin >> str;
            for (int i = 0; i < str.length(); ++i) {
                if(str[i] == '"') {
                    ++i;
                    continue;
                }
                if (str[i] >= 'A' && str[i] <= 'Z') {
                    str[i] += 32;
                }
            }
                if (!fout.is_open()) {
                    std::cout << "file is not open:\n";
                } else {
                    fout << str << " ";
                }
                fout.close();
        }
    }
}

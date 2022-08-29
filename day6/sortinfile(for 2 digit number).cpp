#include <iostream>
#include <fstream>
#include <vector>
const unsigned int max  = 10;
int* insertion_sort(int* arr, const int size){
    for (int j = 0; j < size; j++) {
        bool boolean = true;
        int max = arr[j];
        for (int i = j+1; i < size; ++i) {
            if (max > arr[i]) {
               // std::cout << "max = " << max << std::endl;
                //min = arr[i];
                std::swap(arr[i], arr[j]);
                boolean = false;
                //std::cout << "min afte = " << min << std::endl;
            }
        }
        if (!boolean) {
            j--;
        }
    }
    return arr;
}
void foutf(){
    std::ofstream fout;
    fout.open("/Users/arthur/Desktop/hello.txt");
    if (!fout.is_open()) {
        std::cout << "file is not open:\n";
    }
    for (int i = 0; i < max; i++) {
        fout << rand() % 100;
        fout << " ";
    }
        fout.close();
}
void foutf2(int* arr){
    std::ofstream fout;
    fout.open("/Users/arthur/Desktop/hello_2.txt");
    if (!fout.is_open()) {
        std::cout << "file is not open:\n";
    }
    for (int i = 0; i < max; i++) {
        fout << arr[i];
        fout << " ";
    }
        fout.close();
}
std::string finf(){
    std::ifstream fin;
    fin.open("/Users/arthur/Desktop/hello.txt");
    if (!fin.is_open()) {
        std::cout << "file is not open:\n";
    }
    std::string smth = "";
    while (!fin.eof()){
        std::getline(fin,smth);
    }
    std::cout << "string = " << smth << std::endl;
    return smth;
}


int main() {
    foutf();
    std::string smth = finf();
    const int size = int(smth.size());
    int* arr = new int [size];
    int j = 0;
    int count = 0;
    for (int i = 0; i < smth.size(); i++) {
        if (smth[i] != ' ') {
            arr[j] = smth[i]-'0';
        }
        else{
            arr[j] = 300;
        }
        j++;
    }
    for (int i = 0; i < size-2; i++) {
        if (arr[i] + arr[i+1] < 300) {
            arr[i] = arr[i]*10+arr[i+1];
            arr[i+1] = arr[i+2];
        }
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] == 300) {
            count++;
        }
    }
    for (int j = size-1; j >= 0; j--) {
        for (int i = 0; i < size/2; i++) {
            if (arr[i] == 300) {
                std::swap(arr[i], arr[j]);
            }
        }
    }
    int sizeT = size+1-count;
    int* arr2 = new int[sizeT];
    arr2 = arr;
    delete[] arr;
    std::swap(arr[0], arr[sizeT-1]);
//    std::cout << std::endl << "~~~" << std::endl;
//    for (int i = 0; i < sizeT; i++) {
//        std::cout << arr2[i] << ' ';
//    }
    int* arr3 = new int[sizeT-1];
    arr3 = arr2;
    insertion_sort(arr3, sizeT-1);
    for (int i = 0; i < sizeT-1; i++) {
        std::cout << arr2[i] << ' ';
    }
    foutf2(arr3);
}






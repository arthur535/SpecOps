#include <iostream>

template<typename T>
void foo(T a){
    void* arr[2];
    arr[0] = &a;
    int k = 18;
    arr[1] = &k;
    std::cout << *(T*)(arr[0])  << std::endl << *(int*)(arr[1]);
}
int main() {
    foo<std::string>("hello");
}

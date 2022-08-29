#include <iostream>

class Stack {
public:
    Stack() {
        sp = 0;
        arr = new int[sp];
    };
    
    void push(int value) {
        if (sp == INT32_MAX) {
            std::cout << "Stack is full";
        }
        arr[sp] = value;
        sp++;
    }
    
    int pop() {
        if (sp == 0) {
            std::cout << "Stack is empty";
            return -1;
        }
        sp--;
        return arr[sp];
    }
    ~Stack(){
        delete[] arr;
        arr = nullptr;
    }
private:
    int *arr;
    int sp;
};

int main() {
    Stack s;
    s.push(21);
    s.push(34);
    std::cout << s.pop();
    std::cout << s.pop();
}






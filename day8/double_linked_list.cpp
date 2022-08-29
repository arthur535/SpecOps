#include <iostream>
using namespace std;
struct node {
    node* prev;
    int data;
    node* next;
};
int main(){
    node n1;
    n1.prev = nullptr;
    n1.data = 99;
    n1.next = new node;
    n1.next->data = 45;
    n1.next->prev = &n1;
    n1.next->next = nullptr;
    cout << n1.data << endl;
    cout << n1.next->data << endl;
    cout << n1.next->prev->data << endl;
    cout << n1.next->prev->next->data << endl;
    
    
}

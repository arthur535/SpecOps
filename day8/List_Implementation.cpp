#include <iostream>


template<typename T>
class List {
    
private:
    
    struct node {
        node* prev;
        T useful_data;
        node* next;
    }*head,*tail;
    

public:
    List();
    ~List();
    void Push_back(T);
    void Pop_back();
    void Print();
    void Push_front(T);
    void Pop_front();
    void Insert(int, T);
    void Erase(int, int);
    int Size();
    int Front();
    int Back();
    void Clear();
    void Resize(int);
    void Erase(int);
};


int main() {
    List<int> list;
    std::cout << "Size = " << list.Size() << std::endl;
    list.Push_back(49);//0
    list.Push_back(65);//1
    list.Push_back(33);//2
    list.Push_back(45);//3
    list.Print();
    std::cout << "Size = " << list.Size() << std::endl;
    list.Erase(0,2);
    list.Print();
}


template<typename T>
List<T>::List() {
    head = nullptr;
    tail = nullptr;
}


template<typename T>
List<T>::~List() {
    if (head) {
        while (head) {
            head = head -> next;
        }
        tail = nullptr;
    }
}


template<typename T>
void List<T>::Push_back(T elem) {
    node* tmp = new node;
    tmp -> useful_data = elem;
    tmp -> next = nullptr;
    tmp -> prev = tail;
    if (!tail)
    {
        head = tmp;
        tail = tmp;
        return;
    }
    tail -> next = tmp;
    tail = tmp;
}


template<typename T>
void List<T>::Pop_back() {
    if (tail == nullptr) {
        return;
    }
    if (head == tail)
    {
        node* tmp = head;
        head = tail = nullptr;
        delete tmp;
        return;
    }
    node* tmp = tail;
    tail = tail -> prev;
    tail -> next = nullptr;
    delete tmp;
}


template<typename T>
void List<T>::Print() {
    node* temp = head;
    while(temp) {
        std::cout << temp -> useful_data << "\t";
        temp = temp -> next;
    }
}


template<typename T>
void List<T>::Insert(int pos, T element) {
    if (pos == Size()) {
        Push_back(element);
        return;
    }
    node* tmp = head;
    node* tmp1 = head;
    for (int i = 0; i < pos-1; ++i) {
        tmp = tmp->next;
    }
    for (int i = 0; i < pos; ++i) {
        tmp1 = tmp1 -> next;
    }
    node* new_elem = new node;
    tmp -> next = new_elem;
    new_elem -> prev = tmp;
    new_elem -> next = tmp1;
    tmp1 -> prev = new_elem;
    new_elem -> useful_data = element;
}


template<typename T>
void List<T>::Push_front(T elem) {
    node* tmp = new node;
    tmp->useful_data = elem;
    tmp->prev = nullptr;
    tmp->next = head;
    head->prev = tmp;
    head = tmp;
}


template<typename T>
int List<T>::Size() {
    int size = 0;
    node* tmp = head;
    while (tmp) {
        size++;
        tmp = tmp -> next;
    }
    return size;
}


template<typename T>
int List<T>::Front() {
    return head->useful_data;
}


template<typename T>
int List<T>::Back() {
    return tail->useful_data;
}


template<typename T>
void List<T>::Clear() {
    while (tail != head) {
        delete tail;
        tail = tail->prev;
    }
    delete head;
    head = nullptr;
    tail = nullptr;
}


template<typename T>
void List<T>::Resize(int new_size) {
    if (new_size < Size()) {
        std::cout << "given size is smaller than the actual size " << std::endl;
        return;
    }
  //  std::cout << "your size was " << Size() << std::endl;
    
    for (int i = 0; i < new_size; ++i) {
        Push_back(0);
    }
}


template<typename T>
void List<T>::Erase(int pos1, int pos2) {
    if (pos1 == 0) {
        for (int i = 0; i < pos2+1; ++i) {
            Pop_front();
        }
        return;
    }
    node* tmp1 = head;
    node* tmp2 = head;
    for (int i = 0; i < pos1; ++i) {
        tmp1 = tmp1 -> next;
    }
    for (int i = 0; i < pos1-1; ++i) {
        tmp2 = tmp2 -> next;
    }
    for (int i = 0; i < (pos2 - pos1 + 1); ++i) {
        node* tmp = tmp1->next;
        delete tmp1;
        tmp1 = tmp;
    }
    if(tmp1)
    {
        tmp1 -> prev = tmp2;
        tmp2 -> next = tmp1;
    }
    
    
}


template<typename T>
void List<T>::Pop_front() {
    node* tmp = head;
    head = tmp -> next;
    delete tmp;
}

template<typename T>
void List<T>::Erase(int pos1) {
    int pos2 = Size()-1;
    Erase(pos1, pos2);
}


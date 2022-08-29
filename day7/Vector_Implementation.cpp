#include <iostream>
#include <vector>


template<typename T>
class Vector {
private:
    int m_capacity;
    int m_size;
    T* m_arr;
    void my_swap(int&,int&);    //110
    void Resize();              //85
public:
    Vector();                   //50
    ~Vector();                  //58
    void Push_back(T);          //65
    void Pop_back();            //75
    void Push_front(T);         //97
    int& operator[](int);       //118
    void Erase(int,int);        //125
    int Size();                 //147
    int Capacity();             //153
    int Front();                //159
    int Back();                 //165
    void Insert(int,T);         //171
    bool IsEmpty();             //184
    void Clear();
};

template<typename T>
Vector<T>::Vector() {
    m_capacity = 8;
    m_size = 0;
    m_arr = new T[m_capacity];
}


template<typename T>
Vector<T>::~Vector() {
    delete[] m_arr;
    m_arr = nullptr;
}


template<typename T>
void Vector<T>::Push_back(T element) {
    if (m_size == m_capacity) {
        Resize();
    }
    m_arr[m_size] = element;
    ++m_size;
}


template<typename T>
void Vector<T>::Pop_back() {
    if (0 == m_size) {
        std::cout << "vector is empty" << std::endl;
        return;
    }
    m_size--;
}


template<typename T>
void Vector<T>::Resize() {
    m_capacity *= 2;
    int* tmp = new int [m_capacity];
    for (int i = 0; i < m_size; ++i) {
        tmp[i] = m_arr[i];
    }
    delete[] m_arr;
    m_arr = tmp;
}


template<typename T>
void Vector<T>::Push_front(T element) {
    if (m_size == m_capacity) {
        Resize();
    }
    m_size++;
    for (int i = 0; i < m_size; ++i) {
        my_swap(m_arr[m_size-1-i],m_arr[m_size-i]);
    }
    m_arr[0] = element;
}


template<typename T>
void Vector<T>::my_swap(int& a,int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}


template<typename T>
int& Vector<T>::operator[](int index)
{
    return m_arr[index];
}


template<typename T>
void Vector<T>::Erase(int pos1,int pos2) {
    T* vec = new T[m_capacity];
    int j = 0;
    int temp_size = m_size-(pos2-pos1+1);
    for (int i = 0; i < m_size; ++i) {
        if (i >= pos1 && i <= pos2) {
          //  continue;
        }
        else{
          //  std::cout << "j -> " << j << "\t";
          //  std::cout << "i -> " << i << std::endl;
            vec[j] = m_arr[i];
            j++;
        }
    }
    m_size = temp_size;
    delete[] m_arr;
    m_arr = vec;
}


template<typename T>
int Vector<T>::Size(){
    return m_size;
}


template<typename T>
int Vector<T>::Capacity(){
    return m_capacity;
}


template<typename T>
int Vector<T>::Front(){
    return m_arr[0];
}


template<typename T>
int Vector<T>::Back(){
    return m_arr[m_size-1];
}


template<typename T>
void Vector<T>::Insert(int pos, T element) {
    if (m_size == m_capacity) {
        Resize();
    }
    m_size++;
    for (int i = 0; i < pos; ++i) {
        my_swap(m_arr[m_size-i],m_arr[m_size-i-1]);
    }
    m_arr[pos] = element;
}


template<typename T>
bool Vector<T>::IsEmpty() {
    return (m_size == 0);
}


template<typename T>
void Vector<T>::Clear() {
    T* tmp = new T[m_capacity];
    m_size = 0;
    delete[] m_arr;
    m_arr = tmp;
}

#include <iostream>
#include <map>
int foo() {
    std::map<int, std::string> m;
    m[0] = "";
    m[1] = "one";
    m[2] = "two";
    m[3] = "three";
    m[4] = "four";
    m[5] = "five";
    m[6] = "six";
    m[7] = "seven";
    m[8] = "eight";
    m[9] = "nine";
    m[10] = "ten";
    m[11] = "eleven";
    m[12] = "twelve";
    m[13] = "thirteen";
    m[14] = "fourteen";
    m[15] = "fifteen";
    m[16] = "sixteen";
    m[17] = "seventeen";
    m[18] = "eighteen";
    m[19] = "nineteen";
        
    for (int i = 0; i < 10; i++) {
        m[20+i] += "twenty" + m[i];
        m[30+i] = "thirty" + m[i];
        m[40+i] = "forty" + m[i];
        m[50+i] = "fifty" + m[i];
        m[60+i] = "sixty" + m[i];
        m[70+i] = "seventy" + m[i];
        m[80+i] = "eighty" + m[i];
        m[90+i] = "ninety" + m[i];
    }
    
    int sum = 0;
    for (int i = 1; i < 100; i++) {
        std::cout << m[i] << "\t";
        sum+= m[i].length();
    }
    std::cout << std::endl;
    return sum;
}
int main() {
    std::cout << foo() << std::endl;
}



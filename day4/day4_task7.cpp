#include <iostream>

int last_word_length(std:: string str) {
    int count = 0;
    bool boolean = false;
    for (int i = str.length() - 1; i >= 0; i--) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            boolean = true;
            count++;
        }
        else {
            if (boolean == true)
                return count;
        }
    }
    return count;
}

int main()
{
    std::string str = "say hello to world with pachik";
    std::cout << "The length of last word is " << last_word_length(str) << std::endl;
    return 0;
}




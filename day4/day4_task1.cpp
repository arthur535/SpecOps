#include <iostream>
#include <vector>
#include <string>
vector<string> buildArray(vector<int>& target, int n) {
    vector<string> vec;
    int j = 1;
    for (int i = 0; i < target.size(); )
    {
        if (target[i] == j) {
            vec.push_back("Push");
            i++;
        }
        else {
            vec.push_back("Push");
            vec.push_back("Pop");
        }
        j++;
    }
        return vec;
}


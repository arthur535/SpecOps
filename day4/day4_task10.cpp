#include <iostream>
#include <string>
#include <vector>
std::vector<int> searchRange(std::vector<int>& nums, int target) {
    std::vector<int>vec;
    for (int i = 0; i < nums.size(); ++i) {
        if(nums[i]==target){
            vec.push_back(i);
            break;
        }
    }
    for (int i = nums.size() - 1; i >= 0; --i) {
        if(nums[i]==target){
            vec.push_back(i);
            break;
        }
    }
    if(vec.size()==0){
        vec.push_back(-1);
        vec.push_back(-1);
    }
    return vec;
}


int main(){}

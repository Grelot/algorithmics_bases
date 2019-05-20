#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();        
        vector<int> maps;
        vector<int> pos;
        vector<int> deux;    
        for (int i=0 ; i< n; i++) {
            int complement = target -nums[i];            
            for(int j=0 ;j < maps.size();j++){
                if (maps[j] == complement){
                    deux.push_back(i);
                    deux.push_back(pos[j]);
                    return deux;
                }
            }
            pos.push_back(i);
            maps.push_back(nums[i]);
        }
    return nums;
    } 
       
};


void printVec(std::vector<int> const &input)
{
    for (int i = 0; i < input.size(); i++) {
        std::cout << input.at(i) << ' ';
    }
}


int main() 
{
    vector<int> monArray{ 2, 7, 11, 15 };
    vector<int> twoSumArray;
    int maTarget = 9;
    Solution solve;
    twoSumArray=solve.twoSum(monArray,maTarget);
    printf("Given an array of integers = ");
    printVec(monArray);
    printf(", return indices of the two numbers = ");
    printVec(twoSumArray);
    printf(" such that they add up to a target = %d\n",maTarget);
    return 0;
}





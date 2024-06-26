#include <bits/stdc++.h>
#include<vector>
#include <unordered_map> 
using namespace std;
class Solution{ 
    public:
        vector<int> twosum(vector<int>& nums,int target){
            for(int i=0;i<nums.size();i++){
                for(int j=i+1;j<nums.size();j++){
                    if(nums[i]+nums[j] == target){
                        return {i,j};
                    }
                }
            }
            return {};
        }
};


int main() {
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    
    Solution solution;
    vector<int> result = solution.twosum(nums, target);
    
    if (result.size() == 2) {
        cout << "Indices of the two numbers whose sum is equal to target: " << result[0] << ", " << result[1] << endl;
    } else {
        cout << "No solution found." << endl;
    }
    
    return 0;
}

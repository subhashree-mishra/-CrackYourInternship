//https://leetcode.com/problems/two-sum/
//LEETCODE-1

//code
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int x,y;
        vector<int>v;
        for(int i=0; i<=n-2;i++){
            for(int j=i+1;j<=n-1;j++){
                if(nums[i]+nums[j]==target) {
                        v.push_back(i) ;
                        v.push_back(j); 
                }
        }
    }
     return v;
    }
 
};
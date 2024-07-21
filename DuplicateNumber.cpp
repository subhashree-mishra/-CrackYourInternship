//https://leetcode.com/problems/find-the-duplicate-number/description/
//leetcode 287
 
 //code
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int len= nums.size();
        int i=0;
        while(i<len){
            int correctIdx=nums[i];
            if(nums[correctIdx]==nums[i]) return nums[i];
            else swap(nums[i], nums[correctIdx]);
        }
        return 0;
    }
};
//https://leetcode.com/problems/merge-sorted-array/description/
//LEETCODE-88

//CODE
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
         vector<int> res(m + n); // Create a result array to store the merged array
        int i = 0, j = 0, k = 0;
        
        // Merge the two arrays
        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                res[k] = nums1[i];
                i++;
            } else {
                res[k] = nums2[j];
                j++;
            }
            k++;
        }
        
        // Copy any remaining elements from nums1
        while (i < m) {
            res[k] = nums1[i];
            i++;
            k++;
        }
        
        // Copy any remaining elements from nums2
        while (j < n) {
            res[k] = nums2[j];
            j++;
            k++;
        }
        
        // Copy the merged result back into nums1
        for (int i = 0; i < m + n; i++) {
            nums1[i] = res[i];
        }
        
    }
};
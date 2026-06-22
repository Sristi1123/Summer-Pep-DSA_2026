// https://leetcode.com/problems/running-sum-of-1d-array/description/

// class Solution {
// public:
//     vector<int> runningSum(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> ans;
//         int sum=0;
//         for(int i=0;i<n;i++){
//             sum+=nums[i];
//             ans.push_back(sum);
//         }
//         return ans;
//     }
// };
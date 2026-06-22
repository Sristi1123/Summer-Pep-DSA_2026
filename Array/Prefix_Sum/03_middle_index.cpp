// https://leetcode.com/problems/find-the-middle-index-in-array/
// https://leetcode.com/problems/find-pivot-index/description/

// class Solution {
// public:
//     int findMiddleIndex(vector<int>& nums) {
//         int n=nums.size();
//         vector<int> p;
//         int s=0;
//         for(int i=0;i<n;i++){
//             s+=nums[i];
//             p.push_back(s);
//         }
//         vector<int> ss;
//         int s1=0;
//         for(int i=n-1;i>=0;i--){
//             s1+=nums[i];
//             ss.push_back(s1);
//         }
//         reverse(ss.begin(),ss.end());
//         for(int i=0;i<n;i++){
//             if(p[i]==ss[i]){
//                 return i;
//             }
//         }
//         return -1;
//     }
// };
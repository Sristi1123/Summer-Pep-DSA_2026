// https://www.geeksforgeeks.org/problems/rotation4723/1

// class Solution {
//   public:
//     int findKRotation(vector<int> &arr) {
//         // Code Here
//         int n=arr.size();
//         vector<int> nums;
//         for(int i=0;i<n;i++){
//             nums.push_back(arr[i]);
//         }
//         sort(arr.begin(),arr.end());
//         int a=arr[0];
//         int ans=-1;
//         for(int i=0;i<n;i++){
//             if(nums[i]==a){
//                 ans=i;
//             }
//         }
//         return ans;
//     }
// };

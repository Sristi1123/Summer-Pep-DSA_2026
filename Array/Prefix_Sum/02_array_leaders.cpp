// https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1

// class Solution {
//   public:
//     vector<int> leaders(vector<int>& arr) {
//         // code here
//         int n=arr.size();
//         vector<int> ans;
//         ans.push_back(arr[n-1]);
//         for(int i=n-2;i>=0;i--){
//             if(arr[i]>=ans[ans.size()-1]){
//                 ans.push_back(arr[i]);
//             }
//         }
//         reverse(ans.begin(),ans.end());
//         return ans;
//     }
// };
// https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1
// https://leetcode.com/problems/rotate-image/submissions/2046808899/

// class Solution {
//   public:
//     void rotateMatrix(vector<vector<int>>& mat) {
//         // code here
//         int n=mat.size();
//         int m=mat[0].size();
//         //traversal
//         for(int i=0;i<n;i++){
//             int start=0;
//             int end=n-1;
//             while(start<end){
//                 swap(mat[i][start],mat[i][end]);
//                 start++;
//                 end--;
//             }
//         }
//         //transpose
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 swap(mat[i][j],mat[j][i]);
//             }
//         }
//     }
// };

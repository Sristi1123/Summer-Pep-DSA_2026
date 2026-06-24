// https://codeforces.com/contest/2033/problem/B

// #include <iostream>
// #include <climits>
// #include <algorithm>
// using namespace std;

// int main() {

//     int mat[4][4] = {
//         {1,2,3,-1},
//         {3,-2,3,1},
//         {0,-1,-1,3},
//         {-2,0,0,-1}
//     };

//     int n = 4;
//     int ans = 0;

//     for(int col = 0; col < n; col++) {
//         int i = 0, j = col;
//         int mn = INT_MAX;

//         while(i < n && j < n) {
//             mn = min(mn, mat[i][j]);
//             i++;
//             j++;
//         }

//         ans += max(0, -mn);
//     }

//     for(int row = 1; row < n; row++) {
//         int i = row, j = 0;
//         int mn = INT_MAX;

//         while(i < n && j < n) {
//             mn = min(mn, mat[i][j]);
//             i++;
//             j++;
//         }

//         ans += max(0, -mn);
//     }

//     cout << ans << endl;

//     return 0;
// }
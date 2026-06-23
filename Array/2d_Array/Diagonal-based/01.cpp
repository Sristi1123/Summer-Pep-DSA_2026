#include <iostream>
using namespace std;
void matprint(int arr[][4],int n,int m){
    for(int j=0;j<m;j++){
        int i=0;
        int k=j;
        while(i<=j && k>=0){
            cout<<arr[i][k]<<" ";
            i++;
            k--;
        }
    }
    cout<<endl;
    for(int i=1;i<n;i++){
        int j=m-1;
        int k=i;
        while(j>=i && k<=n-1){
            cout<<arr[k][j]<<" ";
            j--;
            k++;
        }
    }
}
int main(){
    int arr[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    matprint(arr,4,4);
    return 0;
}
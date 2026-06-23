#include <iostream>
using namespace std;
void matprint(int arr[][4],int n,int m){
    for(int i=0;i<n;i++){
        if(i%2==0){
            for(int j=0;j<m;j++){
                cout<<arr[i][j]<<" ";
            }
        }else{
            for(int j=m-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}
int main(){
    int arr[][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };
    matprint(arr,3,4);
    return 0;
}
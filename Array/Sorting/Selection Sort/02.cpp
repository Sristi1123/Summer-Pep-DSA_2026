#include <iostream>
using namespace std;

int main(){
    int arr[]={8,1,9,7,14,5,3};
    int n=7;
    for(int i=0;i<n-1;i++){
        int max_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[max_idx]){
                max_idx=j;
            }
        }
        swap(arr[i],arr[max_idx]);
        for(int j=0;j<n;j++){
            cout<<arr[j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
//selection sort
#include <iostream>
using namespace std;
int main(){
    int arr[]={8,1,9,7,14,5,3};
    int n=7;
    for(int i=0;i<n-1;i++){
        int min_idx=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        swap(arr[i],arr[min_idx]);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
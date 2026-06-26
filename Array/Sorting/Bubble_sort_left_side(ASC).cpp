#include <iostream>
using namespace std;
int main(){
    int arr[]={6,5,4,3,1,2};
    int n=6;

    for(int i=n-1;i>=0;i--){
        for(int j=n-1;j>=n-i-1;j--){
            if(arr[j]<arr[j-1]){
                swap(arr[j],arr[j-1]);
                for(int k=0;k<n;k++){
                    cout<<arr[k]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
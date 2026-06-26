#include <iostream>
using namespace std;
int main(){
    // i want to print every step of array during the sorting process

    int arr[]={6,5,4,8,2,1};
    int n=6;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                for(int k=0;k<n;k++){
                    cout<<arr[k]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}
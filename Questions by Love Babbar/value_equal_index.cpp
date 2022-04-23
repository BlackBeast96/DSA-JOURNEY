#include <iostream>
using namespace std;

int main(){
    //Consider 1-based indexing

    int arr[]={15, 2, 45, 12, 7};
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        if(arr[i]==i+1){
            cout<<arr[i];
        }
    }
    
}
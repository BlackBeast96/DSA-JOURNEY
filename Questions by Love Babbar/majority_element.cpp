#include <iostream>
using namespace std;

int main(){
    int arr[]={3,1,3,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    bool flag=false;
    for(int i=0;i<size-1;i++){
        for(int j=1;j<size;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
                flag=true;
                break;
            }
        }
        if(flag){
            break;
        }
    }   
}
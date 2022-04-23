#include <iostream>
using namespace std;

int main(){
    bool falg=false;
    int arr[]={ 1, 3, 5, 5, 5, 5, 67, 123, 125 };
    int key;
    cin>>key;
    int size=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++){
        for(int j=size-1;j>=i;j--){
            if(key==arr[i]){
                if(arr[i]==arr[j]){
                    cout<<i<<" "<<j;
                    falg=true;
                    break;
                }
            }
        }
        if(falg){
            break;
        }
    }

}
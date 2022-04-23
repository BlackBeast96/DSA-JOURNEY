#include <iostream>
using namespace std;

int main(){
    int arr[] = {20, 40, 50, 70, 70, 60} ;
    int space,key;
    int size=sizeof(arr)/sizeof(arr[0]);
    cin>>space>>key;
    if(space>size){
        cout<<"space is limited "<<size;
    }
    for(int i=0;i<size;i++){
        if(key==arr[i]){
            if(arr[i]==arr[(i+1)+space]){
                cout<<"ok";
            }
        }
    }


}
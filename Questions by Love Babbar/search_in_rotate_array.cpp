#include <iostream>
using namespace std;

int main(){
    int arr[]={4,5,6,7,0,1,2};
    int size=sizeof(arr)/sizeof(arr[0]);
    int key;
    bool flag=false;
    cin>>key;
    int res;
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            res=i;
            flag=true;
            break;
        }
    }
    if(flag){
        cout<<res;
    }
    else{
        cout<<-1;
    }
}
#include <iostream>
using namespace std;

int main(){
    int key,size,res=0;
    int arr[size]={1,2,3,4,5,6};
    bool flag=false;
    cin>>size;
    cin>>key;
    for(int i=0;i<size;i++){
        for(int j=1;j<size;j++){
            res=arr[i]+arr[j];
            if(res==key){
                cout<<"found";
                flag=true;
                break;
            }
        }
        res=0;
        if(flag){
            break;
        }
    }
}
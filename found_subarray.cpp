#include <iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int arr[size]={1,2,3};
    int res;
    int key;
    cin>>key;
    bool flag=false;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
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
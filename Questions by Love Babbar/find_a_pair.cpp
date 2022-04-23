#include <iostream>
using namespace std;

int main(){
    int arr[]={5, 20, 3, 2, 5, 80};
    int size=sizeof(arr)/sizeof(arr[0]);
    int num;
    cin>>num;
    bool flag=false;
    int res=0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            res=arr[j]-arr[i];
            if(num==res){
                flag=true;
            }
        }
    } 
    if(flag){
        cout<<1;
    }
    else{
        cout<<-1;
    }
}
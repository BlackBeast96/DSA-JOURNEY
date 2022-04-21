#include <iostream>
using namespace std;

int main(){
    int arr[]={7,6,0,3,1};
    int min=arr[0];
    int res;
    for(int i=0;i<5;i++){
        if(min>arr[i]){
            min=arr[i];
            res=i;
        }
    } 
    int max=arr[res];
    for(int i=res;i<5;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<max-min;
}
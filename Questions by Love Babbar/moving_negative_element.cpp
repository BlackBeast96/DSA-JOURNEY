#include <iostream>
using namespace std;

int main(){
    int arr[]={-1,2,-1,4,-5};
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
        if(arr[i]<0){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    } 
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}
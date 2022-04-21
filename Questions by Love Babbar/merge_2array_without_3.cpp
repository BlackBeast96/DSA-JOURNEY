#include <iostream>
using namespace std;

int main(){
    int arr[3]={1,4,2};
    int arr2[3]={5,4,6};
    for(int i=0;i<3;i++){
        if(arr[i]<arr2[i]){
            int temp=arr[i];
            arr[i]=arr2[i];
            arr2[i]=temp;
        }
    }
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            if(arr[i]<arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        for(int j=i;j<3;j++){
            if(arr2[i]<arr2[j]){
                int temp=arr2[i];
                arr2[i]=arr2[j];
                arr2[j]=temp;
            }
        }
    }
    for(int i=0;i<3;i++){
        cout<<arr[i];
    }
    for(int i=0;i<3;i++){
        cout<<arr2[i];
    }
    
}
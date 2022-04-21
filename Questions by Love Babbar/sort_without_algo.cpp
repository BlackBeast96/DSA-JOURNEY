#include <iostream>
using namespace std;
#include<math.h>


int main(){
    int arr[]={1,2,4,6,5};
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            if(arr[i]<arr[j]){
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
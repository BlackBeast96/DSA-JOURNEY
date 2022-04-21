#include <iostream>
using namespace std;

int main(){
    int arr[]={1,2,3,8};
    int arr2[]={4,5,6,7};
    int arr3[]={1,3,4,6,5,7};
    for(int i=0;i<6;i++){
        for(int j=0;j<4;j++){
            if(arr3[i]==arr[j]){
                cout<<arr[j]<<endl;
            }

            if( arr3[i]==arr2[j]){
                cout<<endl<<arr2[j];
            }
        }
    } 
}
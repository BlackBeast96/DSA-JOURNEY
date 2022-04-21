#include <iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    bool flag=false;
    int arr[size]={1,2,3,1,4,2};
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]==arr[j]){
                flag=true;
                cout<<"value is "<<arr[i]<<endl;
                cout<<"index is "<<j;
                break;
            }
        }
        if(flag){
            break;
        }
    }
    

}
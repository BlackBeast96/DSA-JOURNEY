#include <iostream>
using namespace std;

int main(){
    int arr[]={1,3,3,4,4};
    bool flag=false;
    for(int i=0;i<4;i++){
        for(int j=i+1;j<5;j++){
            if(arr[i]==arr[j]){
                cout<<"found"<<i<<j;
                flag=true;
                break;
            }

        }
        if(flag){
            break;
        }

    }
}
#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    a=50;
    b=40;
    c=45;
    if(b>a && b<c){
        cout<<b;
    }
    else if(a>b && a<c){
        cout<<a;
    }
    else{
        cout<<c;
    }
}
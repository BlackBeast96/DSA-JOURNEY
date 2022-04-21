#include <iostream>
using namespace std;
#include<string>
int main(){
    string s="HemH";
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(s.at(i)==s.at(j)){
                cout<<j;
            }
            
        }
    }
}
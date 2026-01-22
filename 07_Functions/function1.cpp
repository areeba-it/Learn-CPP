#include<iostream>
using namespace std;
void function1() {
    for(int i=1;i<=10;i++){
        for(int j=1;j<=10-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
int main(){
    function1();
    function1();
}
   return 0;
}
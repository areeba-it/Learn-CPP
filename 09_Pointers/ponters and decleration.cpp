#include<iostream>
using namespace std;
int main(){
    //declare variable
    int var1=3;
    int *pointvar=&var1;
    //pointer for values*
    cout<<"Address of var1:"<<*pointvar<<endl;
    return 0;
}
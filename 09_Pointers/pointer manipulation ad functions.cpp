#include<iostream>
using namespace std;
    //fuction prototype with pointers as parameters
    void swap(int*,int*);
    int main(){
        //initialize a variable
        int a=1,b=2;
        cout<<"Before Swaping"<<endl;
        cout<<"a ="<<a<<endl;
        cout<<"b="<<b<<endl;
        //call function by passing variable address
        swap(&a,&b);
        cout<<"\nAfter Swaping"<<endl;
        cout<<"a="<<a<<endl;
        cout<<"b="<<b<<endl;
        return 0;

    }
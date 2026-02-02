#include<iostream>
using namespace std;
class myClass{
    public:
    void MyMethod(){
        cout<<"Hello World!";
    }
    void msg(){
        cout<<"Good Morning";
    }
    void add(int a,int b){
        cout<<a+b;
    }
};
int main(){
    myClass myobj;
    myobj.MyMethod();
    myobj.msg();
    myobj.add(4,5);
    myClass values;
    values.add(6,11);
    return 0;
}
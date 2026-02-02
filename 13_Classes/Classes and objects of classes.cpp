#include<iostream>
#include<string>
using namespace std;
class myClass{
    public:
    int myNum;
    string myString;
};
int main(){
    myClass Sohail;
    myClass myObj;
    myObj.myNum=15;
    myObj.myString="some text";
    Sohail.myNum=4;
    Sohail.myString="hello";
    cout<<Sohail.myNum<<endl;
    cout<<Sohail.myString<<endl;
    cout<<myObj.myNum<<"\n";
    cout<<myObj.myString;
    return 0;
}
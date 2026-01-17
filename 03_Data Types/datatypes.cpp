#include<iostream>
#include<typeinfo>
using namespace std;
int main() {
    float num1=5.1;
    int num2=num1;
    cout<<typeid(num1).name();
    cout<<typeid(num2).name();
    cout<<num1;
    return 0;

}

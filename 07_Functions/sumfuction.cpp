#include<iostream>
using namespace std;
void sum (int a,int b){
   int result=a+b;
   cout<<result<<endl;
}
int main(){
    int num1,num2;
    cout<<"enter first number:";
    cin>>num1;
    cout<<"enter secound number:";
    cin>>num2;
    sum(num1,num2);
    return 0;
}
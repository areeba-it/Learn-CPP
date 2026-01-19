#include<iostream>
using namespace std;
int main() {
    double balance;
    cout<<"Enter your current balance:$";
    cin>>balance;
    double withdrawl;
    cout<<"Enter your amount you want to withdrawl:$";
    cin>>withdrawl;
    if(withdrawl>balance){
        cout<<"Insufficient Funds.withdrwal not possible"<<end1;
    }
    else{
        balance-=withdrawl;
        cout<<"withdrawl successful"<<endl;
        cout<<"Remaining balance:$"<<balance<<endl;

    } 
    return 0;
}
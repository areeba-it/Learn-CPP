#include<iostream>
using namespace std;
int main() {
    int number;
    cout<<"enter a number:";
    cin>>number;
    int i = 1;
    cout<<"Multiplication table of "<<number<< ":\n";
    do{ 
        int result = number*i;
        cout<<number<<"x"<<i<<"="<<result<<endl;
        i++;
    } while(i<=10);
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int LA[3],i;
    cout<<"Array Before Insertion:"<<endl;
    for(i=0;i<3;i++)
    cout<<"LA["<<i<<"]="<<LA[i]<<endl;
    //prints garbage value
    cout<<"inserting elements.."<<endl;
    cout<<"Array After Insertion"<<endl;//prints array value
    for(i=0;i<5;i++){
       LA[i]=i+2;
       cout<<"LA["<<i<<"]="<<LA[i]<<endl;
    }
    return 0;
}
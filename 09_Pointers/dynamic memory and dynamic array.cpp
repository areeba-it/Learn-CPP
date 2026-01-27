#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter total number of students:";
    cin>>num;
    float*ptr;
    //memory location of num of number of floats
    ptr=new float[num];
    cout<<"Enter the GPA of student."<<endl;
    for(int i=0;i<num;++i){
        cout<<"student"<<i+1<<":"<<endl;
        cin>>*(ptr+i);
    }
    cout<<"\nDisplay the GPA of student."<<endl;
    for(int i=0;i<num;++i){
        cout<<"student"<<i+1<<":"<<*ptr+i<<endl;
    }
    //ptr memory is released
    delete[]ptr;
    return 0;

}
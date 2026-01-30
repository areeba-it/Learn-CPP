#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream FileName;
    FileName.open("FileName",ios::app);
    if(!FileName){
        cout<<"Enter while creating the fie";
    }
    else{
        cout<<"File Created Successfully";
        FileName<<"Hello Everyone";
        FileName.close();
    }
    return 0;

}
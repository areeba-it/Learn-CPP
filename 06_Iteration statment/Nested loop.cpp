#include<iostream>
using namespace std;
int main() {
    int rows,space;
    cout<<"Enter the number of rows for diamond pattern:";
    cin>>rows;
    //upper half of the diamond
    for(i=1;i<=rows;i++){
        for(int space=1;space<=rows-1;space++){
            cout<< " " ;
        }
        for(int j =1;j<2*i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    // * 2*1=2-1
    // *** 2*2=4-1
    // ***** 2*3=6-1
    return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int size=5;
    int myArray[size]={1,2,3,4,5};
    int shiftAmount=2;//number of position to shift
    //shifting the amount to right
    rotate(myArray,myArray+shiftAmount,myArray+size);
    //print the shift array
    for(int i=0;i<size;i++){
        cout<<myArray[i]<<" ";
    }
    cout<<endl;
    return 0;
}
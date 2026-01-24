#include<iostream>
#include<algorithm>
using namespace std;
bool compare(int a,int b) {
    return a>b;
}
int main() {
    int size = 5;
    int myArray[size]={4,2,1,5,3};
    //sort the array in ascending order
    sort(myArray,myArray+size);
    //print the sort array
    for(int i=0;i<size;i++){
        cout<<myArray[i]<<" ";
    } 
    cout<<endl;
    //print the reversed array
    for(int i =0;i<size;i++){
        cout<<myArray[i]<<" ";
    }
    cout<<endl;
    return 0;
}
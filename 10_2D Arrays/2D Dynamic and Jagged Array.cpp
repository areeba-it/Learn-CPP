#include<iostream>
using namespace std;
int main(){
    //Dimension of the 2D array
    int m=3,n=4,c=0;
    //declare a memory block of
    //sze m*n
    int *arr=new int [m*n];
    //traverse the 2D array
    for(int i=0;i<m;i++){
        for(int j =0;j<n;j++){
            //assign values to
            //the memory block
            *(arr+i*n+j)=++c;
        }
    }
    //traverse the 2D array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            //print values of the 
        //memeory block
        cout<<*(arr+i*n+j)<<" ";
        }
        cout<<endl;
    }
    //delete the created array
    delete[]arr;
    return 0;
}
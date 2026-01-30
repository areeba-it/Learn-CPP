#include<iostream>
using namespace std;
int main(){
    //declare jagged array
    int** jaggedArray;
    //define the number of rows
    int numRows=3;
    //allocate memory for the array of pointers
    jaggedArray=new int *[numRows];
    //define the number of colums for each row
    int numcols[]={2,3,4};
    //allocate memory for each row
    for(int i=0;i<numRows;++i){
        jaggedArray[i]=new int [numcols[i]];
    }
    //access and print the values in jagged array
    for(int i=0;i<numRows;++i){
        for(int j=0;j<numcols[i];++j){
            cout<<jaggedArray[i][j]<<" ";
        }
        cout<<endl;
    }
    //deallocate memory for each row
    for(int i=0;i<numRows;++i){
        delete[]jaggedArray[i];
    }
    //deallocate memory for the array of pointer
    delete[]jaggedArray;
    return 0;
}
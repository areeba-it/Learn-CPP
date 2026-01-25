#include<iostream>
#include<iostream>
using namespace std;
int main() {
    int size1=3;
    int size2=4;
    int array1[size1]={1,2,3};
    int array2[size2]={4,5,6,7};
    int newArray[size1+size2];
    //concatenate array1 and array2 into newArray
    copy(array1,array1+size1,newArray);
    copy(array2,array2+size2,newArray+size1);
    //print the concatenate array
    for(int i=0;i<size1+size2;i++){
        cout<<newArray[i]<<"";
    }
    cout<<endl;
    return 0;
}
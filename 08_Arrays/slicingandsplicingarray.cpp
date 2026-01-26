#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int originalArray[]={1,2,3,4,5,6};
    //slicing:create a new array by copying a portion of original array
    int sliceLenght=3;
    int slicedArray[sliceLenght];
    copy(originalArray+2,originalArray+5,slicedArray);
    //print sliced array
    for(int i=0;i<sliceLenght;i++){
        cout<<slicedArray[i]<<" ";
    }
    cout<<endl;
    //splicing:create a new array by combining two arrays
    int spliceArray1[]={10,20,30};
    int spliceArray2[]={40,50,60,70};
    int spliceLength1=3;
    int spliceLength2=4;
    int splicedLength=spliceLength1+spliceLength2;
    int splicedArray[splicedLength];
    copy(spliceArray1,spliceArray1+spliceLength1,splicedArray);
    copy(spliceArray2,spliceArray2+spliceLength2,splicedArray+spliceLength1);
    //print the splice array
    for(int i=0;i<splicedLength;i++){
        cout<<splicedArray[i]<<" ";
    }
    cout<<endl;
    return 0;
}
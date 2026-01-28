#include<iostream>
using namespace std;
main() {
    int arr[4][2] ={
{10,11},
{20,21},
{30,31},
{40,41}
    };
int row,col;
cout<<"Printing 2D Array:\n";
for(row=0;row<4;row++)
{
for(col=0;col<2;col++)
{
cout<<"\t"<<arr[row][col];
}
cout<<endl;
}

}
#include<iostream>
using namespace std;
main(){
    int s[2][2];
    int i,j;
    cout<<"\n2D Array Input\n:";
    for(i=0;i<2;i++) //row
{
    for(j=0;j<2;j++) //col
{
   cout<<"\ns["<<i<<"]["<<j<<"]=";
   cin>>s[i][j];
}
}
cout<<"\nThe 2D Array is:";
}
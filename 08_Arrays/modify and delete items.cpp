#include<iostream>
#include<string>
using namespace std;
int main() {
    int size=5;
    string names[5]; //declare a string array
    //Assign values to the array
    names[0]="Fatima";
    names[1]="Maryam";
    names[2]="elice";
    names[3]="Bob";
    names[4]="Eve";
    //access and print array elements
    cout<<"Names in the Array:"<<endl;
    for(int i=0;i<size;i++){
        cout<<i<<")"<<names[i]<<endl;
    }
    //modify an element
    int modifynumber;
    cout<<"Enter the array index you want to modify:";
    cin>>modifynumber;
    string modify_text;
    cout<<"Enter the text :";
    cin>>modifynumber;
    names[modifynumber]=modify_text;
    //print the modified element
    cout<<"modified name:"<<names[2]<<endl;
    //print the array after modification
    cout<<"**********after Modification******"<<endl;
    for(int i=0;i<size;i++){
        cout<<names[i]<<endl;
    }
    cout<<"Enter the array index you want  to delete:";
    int indextodelete;
    cin>>indextodelete;
    for(int i= indextodelete;i<size-1;i++){
        names[i]=names[i+1];
    }
    int new_size=4;
    string updated_names[new_size];//declare a string array
    // print the array after deletion
    cout<<"Array after deletion:"<<endl;
    for(int i=0;i<new_size;i++){
        cout<<names[i]<<endl;
        updated_names[i]=names[i];
    }
    cout<<"Final arrays:";
    for(int i=0;i<new_size;i++){
        cout<<" "<<updated_names[i];
    }
    return 0;
}
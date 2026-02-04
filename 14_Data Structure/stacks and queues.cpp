#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> myStack;
    //pushing elements onto the stack
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    //checking if the stack is empty
    if(myStack.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }
    //Accessing the top element
    cout<<"Top Element:"<<myStack.top()<<endl;
    //poping element from the stack
    myStack.pop();
    cout<<"Poped an element:"<<endl;
    //checking the new top element
    cout<<"new top element:"<<myStack.top()<<endl; 
   // getting the size of the stack
   cout<<"Stack Size:"<<myStack.size()<<endl;
   return 0;

}
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<int> myQueue;
    //pushing elements onto the queue
    myQueue.push(10);
    myQueue.push(20);
    myQueue.push(30);
    //checking if the queue is empty
    if(myQueue.empty()){
        cout<<"Queue is empty"<<endl;
    }
    else{
        cout<<"Queue is not empty"<<endl;
    }
    //Accessing the front element
    cout<<"Front Element:"<<myQueue.front()<<endl;
    // Accessing the back element 
    myQueue.back();
    cout<<"back an element:"<<endl;
   //dequeue element from the queue
   myQueue.pop();
   cout<<"Dequeued an element."<<endl;
   //checking the new front element
   cout<<"new front element:"<<myQueue.front()<<endl;
   //getting the size of queue
   cout<<"queue size:"<<myQueue.size()<<endl;
   return 0;

}
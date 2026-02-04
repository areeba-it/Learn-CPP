#include<iostream>
using namespace std;
//Node class
class Node{
    public:
    int data;
    Node*next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
//linked list class
class LinkedList {
    private:
    Node*head;
public:
     LinkedList(){
        head=NULL;
     }
     //insert a new node at the end of linked list
     void insert(int data){
        Node*newNode=new Node(data);
        if(head==NULL){
            head=newNode;
     }
     else{
        Node*temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=newNode;
        cout<<endl;
     }
}
};
int main(){
    LinkedList linkedList;
    //insert elements into linked list
    linkedList.insert(10);
    linkedList.insert(20);
    linkedList.insert(30);
    //display the elements in the list
    linkedList.display();
    return 0;

}

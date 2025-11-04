#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* Next;
    Node(int data){
        val=data;
        Next=NULL;
    }
};
class Linkedlist{
    public:
    Node* head;
    Linkedlist(){
        head=NULL;
    }
    //Inserting the element.....
    void insertatlast(int val){ //we are creating the function inside the class that's why we need not to pass head reference.......
        Node* new_node=new Node(val);
        if(head==NULL){
            head=new_node;
            return;
        }
        Node* temp=head;
        while(temp->Next!=NULL){
            temp=temp->Next;
        }
        temp->Next=new_node;
    }
    //Displaying the element.....
    void display(){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->Next;
        }
        cout<<"NULL"<<endl;
    }
};
Node* reverse(Node* &head){
    Node* prevptr=NULL;
    Node* currentptr=head;
    while(currentptr!=NULL){
        Node* Nextptr=currentptr->Next;
        currentptr->Next=prevptr;
        prevptr=currentptr;
        currentptr=Nextptr;
    }
    Node* new_head=prevptr;
    return new_head; 
}
int main(){
    int n;
    cout<<"Enter the number of element want to insert: ";
    cin>>n;
    Linkedlist ll;
    //It will take user input................
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        ll.insertatlast(value);
    }
    ll.head=reverse(ll.head);
    ll.display();
    return 0;
}
//Original Linked List= 1->2->3->4->5.....
//Head is pointing to 1.....
//Reversed Linked List= 5->4->3->2->1.....
// Now head will pont to 5....
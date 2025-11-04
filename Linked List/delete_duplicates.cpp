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
void deleteduplicate(Node* &head){
    Node* current=head;
    while(current!=NULL &&current->Next!=NULL){
        if(current->val==current->Next->val){
            Node* temp=current->Next;
            current->Next=current->Next->Next;
            free(temp);
        }
        else{
        current=current->Next;}
    }
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
    cout<<"After deleting the duplicate elements: "<<endl;
    deleteduplicate(ll.head);
    ll.display();
    cout<<endl;
    return 0;
}
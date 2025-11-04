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
class linkedlist{
    public:
    Node* head;
    linkedlist(){
        head=NULL;
    }
    //Inserting ........
    void insert(int val){
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
};
void reverse(Node* head){
    //Base condition.....
    if(head==NULL){
        return;
    }
    //Recursive condition......
    reverse(head->Next);
        cout<<head->val<<" ";
}
int main(){
    linkedlist ll;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        ll.insert(value);
    }
    cout<<"In reverse order: ";
    reverse(ll.head);
    
    return 0;
}
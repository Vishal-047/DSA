#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* Next;
    Node* prev;
    Node(int data){
        val=data;
        Next=NULL;
        prev=NULL;
    }
};
void insert(Node* &head, int val){
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
        new_node->prev=temp;
}

void insertpos(Node* &head, int val, int pos){
    Node* new_node=new Node(val);
    if(pos==1){
        new_node->Next=head;
        head->prev=new_node;
        head=new_node;
        return;
    }
    Node* temp=head;
    int cnt=1;
    while(cnt<pos-1&&temp!=NULL){
        temp=temp->Next;
        cnt++;
    }
    new_node->Next=temp->Next;
    if(temp->Next!=NULL){
        temp->Next->prev=new_node;
    }
    temp->Next=new_node;
    new_node->prev=temp;
}

void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->Next;
    }
    cout<<"NULL";
}

int main(){
    Node* head=NULL;
    Node* prev=NULL;
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        insert(head, value);
    }
    // cout<<"Insertion at 1st position: "<<endl;
    // insertpos(head,87,1);
    // display(head);
    cout<<endl;
    cout<<"Insertion at last position: "<<endl;
    insertpos(head,47,n);
    display(head);
    return 0;
}
#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* Next;

    Node (int data){
        val=data;
        Next=NULL;

    }
};

void input(Node* &head, int val){
    Node* new_node=new Node(val);
    if(head==NULL){
        head=new_node;
        new_node->Next=head;
        return;
    }
    Node* temp=head;
    while(temp->Next!=head){
        temp=temp->Next;
    }
    temp->Next=new_node;
    new_node->Next=head;
    
}


void display(Node* head){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    do {
        cout << temp->val << " ";
        temp = temp->Next;
    } while (temp != head);
    cout << endl;
}

// This will print the whole linkedlist 15 times........ 
void printlist(Node* head){
    Node* temp=head;
    for(int i=0;i<15;i++){
        cout<<temp->val<<" ";
        temp=temp->Next;
    }
    cout<<endl;
}

int main(){
    Node* head=NULL;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int value;
        cin>>value;
        input(head, value);
    }
    display(head);
    printlist(head);
    return 0;
}
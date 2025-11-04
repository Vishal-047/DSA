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

void deletelist(Node* &head, int pos, int n){
    Node* tail=head;
    Node* temp=head;
    while(tail->Next!=head){
        tail=tail->Next;
    }
    //Now tail is pointing to last node..........
    if(pos==1){
        tail->Next=temp->Next;
        head=head->Next;
        free(temp);
        return;
    }
   if (pos == n) {
    Node* prev = head;
    
    // Traverse to the second last node
    while (prev->Next->Next != head) {
        prev = prev->Next;
    }
    
    // Now, prev->Next is the last node
    Node* temp = prev->Next;
    prev->Next = head;  // Re-link to head to maintain the circular structure
    
    delete temp;  // Properly delete the last node
    return;
}


    int crnt=1;
    while(crnt!=pos-1){
        temp=temp->Next;
        crnt++;
    }
    Node* prev=temp->Next;
    temp->Next=prev->Next;
    free(prev);
}

void display(Node* head){
    if (head == NULL) return;
    Node* temp = head;
    do {
        cout << temp->val << " ";
        temp = temp->Next;
    } while (temp != head);
    cout << endl;
}

void printlist(Node* head){
    Node* temp=head;
    for(int i=0;i<20;i++){
        cout<<temp->val<<" ";
        temp=temp->Next;
    }
}

int main(){
    Node* head=NULL;
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        input(head, value);
    }
    int pos;
    cout<<"Enter the position: ";
    cin>>pos;
    deletelist(head,pos,n);
    display(head);
    printlist(head);
}
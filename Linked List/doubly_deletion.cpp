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

// void deletion(Node* &head, int pos) {
//     if (head == NULL || pos <= 0) {
//         cout << "Invalid position" << endl;
//         return;
//     }
//     Node* temp = head;
//     if (pos == 1) {
//         head = head->Next;
//         if (head != NULL) {
//             head->prev = NULL;
//         }
//         delete temp;
//         return;
//     }
//     int crnt = 1;
//     while (crnt < pos && temp != NULL) {
//         temp = temp->Next;
//         crnt++;
//     }
//     if (temp == NULL) {
//         cout << "Position out of bounds" << endl;
//         return;
//     }
//     if (temp->Next != NULL) {
//         temp->Next->prev = temp->prev;
//     }
//     if (temp->prev != NULL) {
//         temp->prev->Next = temp->Next;
//     }
//     delete temp;
// }
void deletion(Node* &head , int pos){
    if(pos==1){
        Node* temp=head;
        head=head->Next;
        if(head!=NULL){
        head->Next->prev=NULL;}
        free(temp);
        return;
    }
    Node* temp=head;
    int crnt=1;
    
    while(crnt<pos){
        crnt++;
        temp=temp->Next;
    }
    temp->prev->Next=temp->Next;
    if(temp->Next!=NULL){
        temp->Next->prev=temp->prev;
    }
    temp->prev=NULL;
    
    free(temp);
}
void display(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->Next;
    }
    cout<<endl;
}
int main(){
    Node* head=NULL;
    Node* prev=NULL;

    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        insert(head, value);
    }
    deletion(head,1);
    display(head);
    cout<<endl;
    deletion(head,n-1);
    display(head);
    return 0;
}
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
    //to perform insertion at starting.........
    void insertathead(Node* &head, int val){
        Node* new_node=new Node(val);//creating a new node........
        new_node->Next=head; //Next to the new node we need to insert the first node of the current linked list.......
        head=new_node;
    }

    //to perform insertion at end.........
    void insertatend(Node* &head, int val){
        Node* new_node=new Node(val);
        Node* temp=head;
        while(temp->Next!=NULL){
            temp=temp->Next;
        }
        //As the value of temp next reaches to NULL we will insert the new node...........
        temp->Next=new_node;
    }
    // to perform insertion st specific position.........
    void insertatposition(Node* &head, int val, int pos){
        if(pos==0){
            insertathead(head,val);
        }
        Node* new_node=new Node(val);
        Node* temp=head;
        int current_pos=0;
        while(current_pos!=pos-1){
            temp=temp->Next;
            current_pos++;
        }
        //As the current position == position-1....
        new_node->Next=temp->Next;
        temp->Next=new_node;
    }
    //this will search that whether that value is present in the lost or not.........
bool search(Node* head, int x) {
    Node* current = head;
    while (current != NULL) {
        if (current->val == x)
            return true;
        current = current->Next;
    }
    return false;
}
    //Traversing the list..........
    void display(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp=temp->Next;
        }
        cout<<"NULL"<<endl;
    }

int main(){
    Node *head=NULL; //creating an empty list...
    //start
    cout<<"Insertion at starting: "<<endl;
    insertathead(head,20);
    display(head);
    insertathead(head,30);
    display(head);
    insertathead(head,40);
    display(head);
    cout<<endl;
    //end
    cout<<"Insertion at end: "<<endl;
    insertatend(head,400);
    display(head);
    insertatend(head,200);
    display(head);
    cout<<endl;
    //specific position
    cout<<"Insertion at specific position: "<<endl;
    insertatposition(head, 150, 3);
    display(head);
    int x = 21;
    search(head, x) ? cout << "Yes" : cout << "No";

    return 0;
}

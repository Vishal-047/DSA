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
    //UPDATION of the linked list..........
    void update(Node* &head, int val, int pos){
        Node* temp=head;
        int current_pos=0;
        while(current_pos!=pos){
            temp=temp->Next;
            current_pos++;
        }
        //As current_pos==pos, we will insert the value...
        temp->val=val;
    }
    //Deletion of the first Node of the list.........
    void deleteathead(Node* &head){
        Node* temp=head;
        head=head->Next;
        free(temp);
    }
    //Deletion of last node.........
    void deleteatlast(Node* &head){
        Node* second_last=head;
        while(second_last->Next->Next!=NULL){
            second_last=second_last->Next;
        }
        //we will get the second last node now we have to perform deletion......
        Node* temp=second_last->Next; //last node to be deleted...
        second_last->Next=NULL;
        free(temp);
    }
    //Deletion at specific position.......
    void deleteatposition(Node* &head, int pos){
        Node* prev=head;
        int current_pos=0;
        while(current_pos!=pos-1){
            current_pos++;
            prev=prev->Next;
        }
        //As we will get the prev position.....
        Node* temp=prev->Next;
        prev->Next=prev->Next->Next;
        free(temp);
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
    int j=3;
    cout<<"Insertion at "<<j<<" position: "<<endl;
    insertatposition(head, 150, j);
    display(head);
    cout<<endl;
    //updation at specific point
    int k=3, l=4;
    cout<<"After updation at "<<k<<" and "<<l<<" position: "<<endl;
    update(head, 245, k);
    display(head);
    update(head, 255, l);
    display(head);
    cout<<endl;
    //Deletion of first NOde
    cout<<"After deleting first Node: "<<endl;
    deleteathead(head);
    display(head);
    cout<<endl;
    //Deletion of last node
    cout<<"After deleting the last Node: "<<endl;
    deleteatlast(head);
    display(head);
    cout<<endl;
    //Deletion of specific node
    int n=3;
    cout<<"After deleting at "<< n<<" position: "<<endl;
    deleteatposition(head, n);
    display(head);
    return 0;
}
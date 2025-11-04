#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* insertintobst(Node* root, int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }
    if(d>root->data){
        root->right=insertintobst(root->right,d);
    }
    else{
        root->left=insertintobst(root->left,d);
    }
    return root;
}
bool searching(Node* root, int d){
    while(root!=NULL){
        if(root->data==d){
            return true;
        }
        if(root->data > d){
            root=root->left;
        }
        if(root->data<d){
            root=root->right;
        }
    }
}

void input(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
    root=insertintobst(root, data);
    cin>>data;
    }
}

int main(){
    Node* root=NULL;
    cout<<"Enter the data for root Node: ";
    input(root);
    cout<<"Enter the target data for searching: ";
    int data;
    cin>>data;
    if(searching(root, data)){
        cout<<data<<" is found";
    }
    else{
        cout<<data<<" is not found";
    }
}
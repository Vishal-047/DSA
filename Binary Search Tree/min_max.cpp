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
        this->right=nullptr;
    }
};

Node* insert(Node* root, int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }

    if(d<root->data){
        root->left=insert(root->left, d);
    }
    else{
        root->right=insert(root->right, d);
    }
    return root;
}

Node* findmin(Node* root){
    while(root->left!=NULL){
        root=root->left;
    }
    return root;
}
Node* findmax(Node* root){
    while(root->right!=NULL){
        root=root->right;
    }
    return root;
}

void input(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root= insert(root, data);
        cin>>data;
    }
}

int main(){
    Node* root=NULL;
    input(root);
    cout<<"Minimum value: "<<findmin(root)->data;
    cout<<endl;
    cout<<"Maximum value: "<<findmax(root)->data;
}
#include<iostream>
#include<stack>
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

Node* buildtree(Node* root){
    cout<<"Enter the data: ";
    int data;
    cin>>data;
    root=new Node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter the data for left node of "<<data<<endl;
    root->left=buildtree(root->left);
    cout<<"Enter the data for right node of "<<data<<endl;
    root->right=buildtree(root->right);
    return root;
}

void reversetraversal(Node* root) {
    if (root == NULL) return;

    queue<Node*> q;
    stack<Node*> s;
    q.push(root);

    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        s.push(temp);

        // Push right child first so that left child is processed first
        if (temp->right) q.push(temp->right);
        if (temp->left) q.push(temp->left);
    }

    // Print all nodes from the stack
    while (!s.empty()) {
        cout << s.top()->data << " ";
        s.pop();
    }
}

int main(){
    Node* root=NULL;
    root=buildtree(root);
    reversetraversal(root);
    return 0;
}

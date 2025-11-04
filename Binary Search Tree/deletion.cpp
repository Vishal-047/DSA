#include<iostream>
#include<queue>
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

Node* insertion(Node* root, int val){
    if(root==NULL){
        root=new Node(val);
        return root;
    }
    if(root->data > val){
        root->left=insertion(root->left, val);
    }
    else{
        root->right=insertion(root->right, val);
    }
    return root;
}

Node* input(Node* root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertion(root, data);
        cin>>data;
    }
    return root;
}


Node* findmax(Node* root){
    if(root==NULL){
        return NULL;
    }
    while(root->right!=NULL){
        root=root->right;
    }
        return root;
}

Node* deletion(Node* root, int val){
    if(root==NULL){
        return NULL;
    }
    if(root->data==val){

        // 0 child........
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }

        //1 child.......
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }

        if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }

        // Case 3: Two children.......
        if (root->left != NULL && root->right != NULL) {
             Node* temp = findmax(root->left);
             root->data = temp->data; 
             root->left = deletion(root->left, temp->data); 
             return root; 
        }
    }

    if(root->data > val){
        root->left=deletion(root->left, val);
    }
    if(root->data<val){
        root->right=deletion(root->right, val);
    }
    return root;
}

Node* traversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    Node* root=NULL;
    cout<<"Enter the data for root node: ";
    int data;
    cin>>data;
    root=input(root);
    traversal(root);
    cout<<"Maximum value: "<<findmax(root)->data<<endl;
    cout<<"Enter the data for deletion: ";
    int val;
    cin>>val;
    root=deletion(root, val);
    traversal(root);
    return 0;

}
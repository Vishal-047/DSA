#include<iostream>
#include<stack>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top;

    Stack(int size){
        this->size=size;
        arr=new int[size];
        top=-1;
    }

    void push(int element){
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout<<"Stack overflow"<<endl;
        }
    }

    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }

    int peak(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }

    bool isempty(){
        if(top==-1){
            return true;
    }
        else {
            return false;
        }
    }
};

int main(){
    int n;
    cout<<"Enter the size of stack: ";
    cin>>n;
    Stack s(n);
    for(int i=0;i<n;i++){
        int value;
        cin>>value;
        s.push(value);
    }
    cout<<s.peak()<<endl;
    s.pop();
    cout<<s.peak()<<endl;
}
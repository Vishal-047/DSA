#include<iostream>
#include<stack>
using namespace std;
int main(){
stack<int>s;
s.push(2);
s.push(1);
s.push(4);
s.push(23);
s.pop();
cout<<s.empty()<<endl; // 0 means false and 1 means true....
cout<<s.top()<<endl;
cout<<s.size()<<endl;
}

//This code will add and remove elements from the stack.....
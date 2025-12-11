#include<bits/stdc++.h>
using namespace std;

void recursion(int n, string name){
    if(n==0) return;

    cout<<name<<" ";
    recursion(n-1,name);
}

int main(){
    int n;
    cout<<"Number of time you want to print the name is: ";
    cin>>n;
    string name;
    cout<<"Enter the name: ";
    cin>>name;
    recursion(n,name);
}
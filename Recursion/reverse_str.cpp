#include<bits/stdc++.h>
using namespace std;

string reverse(int i,int j,string &s){
    //base case...
    if(i>j) return s;
    swap(s[i],s[j]);
    i++,j--;
    //recursive case...
    return reverse(i,j,s);
    
}

int main(){
    string n;
    cout<<"Enter the string value: ";
    cin>>n;
    int i=0,j=n.size()-1;
    string ans=reverse(i,j,n);
    cout<<"Reversed String: ";
    cout<<ans;
}
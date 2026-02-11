#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i,int j,string &s){
    //base case...
    if(i>j) return true;
    //1st case...
    if(s[i]!=s[j]) return false;
    //recursive case...
    else 
    return palindrome(i+1,j-1,s);
    
}

int main(){
    string n;
    cout<<"Enter the string value: ";
    cin>>n;
    int i=0,j=n.size()-1;
    bool ans=palindrome(i,j,n);
    if(ans) cout<<"It is palindrome";
    else cout<<"Not a Plaindrome";
    return 0;
}
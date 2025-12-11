#include<bits/stdc++.h>
using namespace std;

void count(int n){
    if(n==0) return;
    //Below code will print numbers in descending order....
    // cout<<n<<" "; 
    count(n-1);
    //Below code will print the numbers in ascending order....
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Counting from 1 to "<<n<<" is: ";
    count(n);
}

//even though you don’t explicitly store n in another variable, recursion itself keeps track of the values because each function call has its own parameter stored in the call stack.

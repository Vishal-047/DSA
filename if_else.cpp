#include<iostream>
using namespace std;

int main(){

    int a;
    cout<<"Enter the number: ";
    cin>>a;
    if(a==0)
    {
        cout<<"Enter a valid number";
    }
    else if (a%2==0)
    {
        cout<<"This is an even number";
    }
    else{
        cout<<"This is an odd number";
    }

    return 0;
}
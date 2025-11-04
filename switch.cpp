#include<iostream>

using namespace std;

int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;

    switch (a)
    {
    
    case 10:
        cout<<"Not applicabe";
        break;

    case 20:
        cout<<"applicabe";
        break;

    default:
        cout<<"No cases matches";
        break;
    }
    return 0;
}
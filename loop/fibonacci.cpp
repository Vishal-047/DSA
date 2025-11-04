#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a=0, b=1, sum=0;
    for(int i=0; i<n; i++){
        cout<<a<<" ";
        sum=a+b;
        a=b;
        b=sum;

    }
    return 0;
}
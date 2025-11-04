#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=0;
    int sum=0;
    while (i<=n)
    {
        sum=sum+i;
        i=i+2;
    }
    cout<<sum;
    
    return 0;
}
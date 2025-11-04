#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int a=n;
    int ans=0;
    while(n!=0){
        int rem=n%10;
        ans=ans*10+rem;
        n=n/10;
    }
    cout<<"After reversing, "<<a<<" will become "<<ans;
    return 0;
}
#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    int i=1;
    int sum=0;
    while(i<=a){
        sum=sum+i;
        cout<<sum<<" ";
        i++;
    }
    cout<<endl<<sum;
    return 0;
}
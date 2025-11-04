#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int count=0;
    if(n<=1){
        count=1;
    }
    else{
    for(int i=2; i<=n/2; i++){
        if(n%i==0){
            count =1;
            break;
        }
    }
    }
    if(count==1){
        cout<<"The number is not a prime number";
    }
    else{
        cout<<"The number is a prime number";
    }
    return 0;
}
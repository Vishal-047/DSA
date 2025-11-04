#include<iostream>
using namespace std;
void fact(int a){
    int ans=1;
    int i;
    for(i=a; i>=1; i--){
        ans=ans*i;
    }
    cout<<a<<"!=: "<<ans<<endl;
}

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    cout<<"Factorial from 1 to "<<n<<" is: "<<endl;
    for(int i=1; i<=n;i++){
        fact(i);
    }
    return 0;
}
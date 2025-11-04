#include<iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    for(int i=a; i>=1; i--){
        fact=fact*i;
    }
    return fact;
}
 int nCr(int n, int r){
    int num=factorial(n);
    int denom=factorial(r)*factorial(n-r);
    int ans=num/denom;
    cout<<ans<<endl;
}

int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int r;
    cout<<"Enter r: ";
    cin>>r;
    factorial(n);
    nCr(n, r);
    return 0;
}
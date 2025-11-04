#include<iostream>
using namespace std;

int min(int x, int y){
    if(x<y){
        return x;
    }
    else{return y;}
}

int hcf(int x, int y){
    int ans=0;
    for(int i=1; i<=min(x,y); i++){
        if(x%i==0 && y%i==0){
            ans=i;
        }
    }
    return ans;
}

int main()
{
    int m, n;
    cout<<"Enter the first number: ";
    cin>>m;
    cout<<"Enter the second number: ";
    cin>>n;
    cout<<"The GCD of "<<m<<" and "<<n<<" is: "<<hcf(m,n);

    return 0;
}
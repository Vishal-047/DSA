#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    for(int i=1;i<=n;i++){
    int count=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                count=0;
                break;
            }    
        }
        if(count==1){
            cout<<i<<" ";
        }
    }
    return 0;
}
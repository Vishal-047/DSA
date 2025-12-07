#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int a){
    int n=a;
    int size=to_string(a).size();
    int sum=0;
    while(a!=0){
        int rem=a%10;
        int result=1;
        for(int i=1;i<=size;i++){
            result*=rem;
        }
        sum+=result;
        result=0;
        a/=10;
    }
    return n==sum;
}
int main(){
    int a;
    cout<<"Enter the number: ";
    cin>>a;
    if(isArmstrong(a)){
        cout<<a<<" is an Armstrong number";
    }
    else{
        cout<<a<<" is not an Armstrong number";
    }
    cout<<endl;
    cout<<"All Armstrong number between 1 to 1000: ";
    for(int i=1;i<=1000;i++){
        if(isArmstrong(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
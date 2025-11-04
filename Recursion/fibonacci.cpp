#include<iostream>
using namespace std;
int fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int ans;
    ans=fibonacci(n-1)+fibonacci(n-2);
    return ans;
}
// Below code is written so that seris of fibonacci will be printed.......
void print(int n){
    for(int i=0;i<=n;i++){
        cout<<fibonacci(i)<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    print(n);
    return 0;
}
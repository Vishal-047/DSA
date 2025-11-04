#include<iostream>
using namespace std;
void input(int x){
   int arr[x];
   for(int i=0;i<x;i++){
    cin>>arr[i];
   }
   int sum=0;
   for(int i=0;i<x;i++){
    if(arr[i]>=0) sum=sum+arr[i];
    else throw(sum);
}
}
int main(){
    try{
        int n;
        cin>>n;
        input(n);
    }
    catch(int c){
        cout<<c;
    }
        
    return 0;
}
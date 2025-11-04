#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int num;
    cout<<"Enter the element which u want to insert: ";
    cin>>num;
    int in;
    cout<<"Enter the index: ";
    cin>>in;
    int arr[n+1];
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n; i>=in; i--){
        arr[i+1]=arr[i];}
    arr[in]=num;    
    for(int i=0;i<n+1;i++){
        cout<<arr[i]<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n){
    if(n==0) return;
    cout<<arr[n-1]<<" ";
    reverse(arr,n-1);
}
int main(){
    int n;
    cout<<"Enter the number of element in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the numbers of the array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    reverse(arr,n);
}
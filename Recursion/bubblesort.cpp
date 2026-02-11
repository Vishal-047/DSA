#include<bits/stdc++.h>
using namespace std;
void sorted(int arr[],int n){
    // base case...
    if(n==0||n==1) return;
    // 1st case...
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    //Recursive condition...
    sorted(arr,n-1);
}
int main(){
    int n;
    cout<<"Enter the numver of element: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sorted(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}
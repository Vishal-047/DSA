#include<bits/stdc++.h>
using namespace std;

void sorting(vector<int>&arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
            if(arr[j]>temp) arr[j+1]=arr[j];
            else break;
        }
        arr[j+1]=temp;
    }
}
int main(){
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the numbers: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sorting(arr);
    cout<<"Sorted array: ";
    for(int i:arr){
        cout<<i<<" ";
    }
}
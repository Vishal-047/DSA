#include<bits/stdc++.h>
using namespace std;
bool issorted(int arr[], int n){
    //base condition..
    if(n==0 || n==1) return true;
    if(arr[0]>arr[1]) return false;
    //recursive condition....
    bool ans=issorted(arr+1,n-1);
    return ans;
}

int main(){
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool ans=issorted(arr,n);
    if(ans) cout<<"Array is sorted.";
    else cout<<"Array is not sorted.";
    return 0;
}
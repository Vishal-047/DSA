#include<bits/stdc++.h>
using namespace std;

int consecsum(int arr[],int n,int k){
    int sum=0;
    for(int i=0;i<k;i++) sum+=arr[i];
    int maxsum=sum;
    int l=0,r=k;
    while(r<n){
        sum-=arr[l];
        sum+=arr[r];
        l++;
        r++;
        maxsum=max(maxsum,sum);
    }
    return maxsum;
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
    int k;
    cout<<"Enter total number of cosecutive indexes: ";
    cin>>k;
    int ans=consecsum(arr,n,k);
    cout<<ans;
    return 0;
}
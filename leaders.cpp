#include<bits/stdc++.h>
//The rightmost element (0) is always a leader.  
// The elements which is greater than the elements to their right, making them leaders as well.
using namespace std;

vector<int> leaders(int arr[], int n){
    vector<int>nums;
    int maxi=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            nums.push_back(arr[i]);
        }
        maxi=max(maxi,arr[i]);
    }
    sort(nums.begin(),nums.end());
    return nums;
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>result=leaders(arr,n);
    cout<<"Leader in the array: ";
    for(int i:result){
        cout<<i<<" ";
    }
    return 0;
}
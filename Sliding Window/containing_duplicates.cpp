#include<bits/stdc++.h>
using namespace std;

bool duplicates(int arr[], int n, int k){
    unordered_set<int>s;
    int l=0;
    for(int r=0;r<n;r++){
        //first we will se that whether that element is present in the set or not...
        if(s.count(arr[r])) return true;
        // if not present then insert it....
        s.insert(arr[r]);
        //Now ensure that the window size do not exceed the Kth limit...
        if(r-l>=k){
            s.erase(arr[l]);
            l++;
        }
    }
    return false;
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
    bool ans=duplicates(arr,n,k);
    if(ans) cout<<"Duplicates were present";
    else cout<<"No duplicate found";
    return 0;
}
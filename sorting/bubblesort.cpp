#include<bits/stdc++.h>
using namespace std;
void sorted(vector<int>&arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        bool isswapped=false;
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                isswapped=true;
            }
        }
        if(!isswapped) break;
    }
}
int main(){
    vector<int>arr;
    int n;
    cout<<"Enter -1 to stop: ";
    while(true){
        cin>>n;
        if(n==-1) break;
        arr.push_back(n);
    }
    sorted(arr);
    for(int num:arr){
        cout<<num<<" ";
    }
}
#include<bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>>&arr,int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
}
void rotate(vector<vector<int>>&arr,int n){
    for(int i=0;i<n;i++){
        reverse(arr[i].begin(),arr[i].end());
    }
}

int main(){
    int n;
    cout<<"Enter the size of matrix: ";
    cin>>n;
    vector<vector<int>>arr(n,vector<int>(n));
    cout<<"Enter the elements of the matrix: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    transpose(arr,n);
    rotate(arr,n);
    cout<<"After rotating the Matrix by 90 degree: "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
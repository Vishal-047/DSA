#include<bits/stdc++.h>
using namespace std;
int mian(){
    int n;
    cout<<"Enter the number: ";
    vector<int>arr;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            arr.push_back(i);
        }
    }
    for(int i=0;i<=arr.size();i++){
        cout<<arr[i];
    }
}
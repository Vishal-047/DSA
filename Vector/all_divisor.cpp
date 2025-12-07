#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    vector<int>arr;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            arr.push_back(i);
        }
    }
    cout<<"The divisor of "<<n<<" are: ";
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
}
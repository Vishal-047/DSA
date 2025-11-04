#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    for(int i=0;i<n;i++){
        for(int j=i+1;i<n;j++){
            if(arr[i]+arr[j]==target){
                cout<<arr[i]<<", "<<arr[j];
            }
            else continue;
        }
    }
    delete[] arr;
    return 0;
}

// This code is not working....
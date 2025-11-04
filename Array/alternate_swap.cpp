#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[50];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1; i++){
        int tem=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=tem;
        i++;
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}
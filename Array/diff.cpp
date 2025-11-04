#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[50];
    int diff=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=1;i<n;i++){
        diff+=arr[i]-arr[i-1];
    }
    cout<<"The difference of the given array is: "<<diff<<endl;
    return 0;
}
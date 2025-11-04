#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[50];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
   for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }
    for(int i=0;i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
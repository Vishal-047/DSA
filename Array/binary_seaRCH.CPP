#include<iostream>
using namespace std;
void binarySearch(int arr[], int n, int key){
    int start=0;
    int end=n-1;

    while(start<=end){
    int mid=(start+end)/2;

        if(arr[mid]==key){
            cout<<"The index of "<<key<<" is "<<mid;
            return;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    cout<<"This element is not present";
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k;
    cout<<"Enter the key element which you want to search: ";
    cin>>k;

    binarySearch(arr ,n, k);

    return 0;
}
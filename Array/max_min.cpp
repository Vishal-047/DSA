#include<iostream>
using namespace std;
void array(int arr[], int n){
    int min=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Minimum element of the given array is: "<<min<<endl;
}

void arry(int arr[], int n){
    int max=arr[0];
    for(int i=1; i<n; i++){
        if(arr[i]>max) max=arr[i];
    }
    cout<<"Maximum element of the given array is: "<<max<<endl;
}

int main()
{
    int n;
    cout<<"Enter the size of arary: ";
    cin>>n;
    int arr[50];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    array(arr, n);
    arry(arr, n);

    return 0;
}
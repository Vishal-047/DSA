#include<iostream>
using namespace std;
void binary_srch(int arr[][20], int m,int n, int key){
    int start=0, end=m*n-1;
    while(start<=end){
    int mid=start+(end-start)/2;
    int element=arr[mid/n][mid%n];
        if(element==key){
            cout<<"Target found";
            return;
        }
        if(key>element){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
        cout<<"Target not found";
}

int main()
{
    int rows;
    cout<<"Enter the number of rows: ";
    cin>>rows;
    int columns;
    cout<<"Enter the number of columns: ";
    cin>>columns;

    int arr[20][20];
    cout<<"Enter the elements: "<<endl;
    for(int i=0; i<rows; i++){
        for(int j=0; j<columns; j++){
            cin>>arr[i][j];
        }
    }
    int key;
    cout<<"Enter the element to be found: ";
    cin>>key;


    binary_srch(arr,rows,columns,key);
    return 0;
}

// Time complexity will be O(log(rows*columns)).......7
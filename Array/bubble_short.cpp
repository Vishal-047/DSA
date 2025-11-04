#include<iostream>
using namespace std;
void bubble(int arr[], int n){

    for(int i=1; i<n; i++){   // for number of rounds....
    bool swapped=false; // if array is already sorted..........
        for(int j=0; j<n-i; j++){   // for swaping the elements.....
            if(arr[j]>arr[j+1]){
                //swap(arr[j], arr[j+1]);    OR
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                bool swapped=true;
            }
        }
        if (swapped==false){     //by this condition we can check that if the array is already sorted no need to run the loop further more time and the time complexity of the sorted array will be O(n)...... and when we sort the array, time complexity will be O(n^2)......
            break;
        }
    }
}

int main()
{
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    int arr[50];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bubble(arr, n);

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
// 1. How much passes require while shorting the array.
// 2. After k number of passes what will be the form of array.
// 3. Time complexity.
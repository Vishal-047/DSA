#include <iostream>
using namespace std;
int main() {
    
    int arr[10]={10,20,30,40,50,90};
    int brr[10]={10,20,90};
    int k=0;
    for(int i=6; i<=9; i++){
            arr[i]=brr[k];
            k++;
        }
    for(int i=0;i<9; i++){
        cout<<arr[i]<<" ";
        
    }
    return 0;
}
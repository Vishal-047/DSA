#include <iostream>
using namespace std;
int main() {
    
    int arr[10]={10,20,30,40,50,90};
    cout<<"Before deletion: "<<endl;
    for(int i=0; i<=5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    for(int i=2; i<5;i++){
        arr[i]=arr[i+1];
    }
    cout<<"After deletion: "<<endl;
    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){
    int n=5;
    int arr[5];
    int *ptr;
    ptr=arr;
    for(int i=0;i<n;i++){
        cin>>*(ptr+i);
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(max<*(ptr+i)){
        max=*(ptr+i);}
    }
    cout<<max;
    return 0;
}
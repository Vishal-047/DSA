#include<iostream>
using namespace std;
class heap{
    public:
    int arr[50];
    int size;
    heap(){
        arr[0]=-1;
        size=0;
    }
    void insert(int val){
        size=size+1;
        int i=size;
        arr[i]=val;
        while(i>1){
            int parent=i/2;
            if(arr[parent]<arr[i]){
                swap(arr[parent], arr[i]);
                i=parent;
            }
            else{
                return;
            }
        }
    }
    void print(){
        for(int i=1; i<=size; i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    cout<<"Enter the no. of data: ";
    int n;
    cin>>n;
    heap h;
    cout<<"Enter the element of max heap: ";
    for(int i=0; i<n;i++){
        int val;
        cin>>val;
        h.insert(val);
    }
    cout<<"Printing the max heap: ";8
    h.print();
    return 0;
    
}
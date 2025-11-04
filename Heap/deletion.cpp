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

    void insertion(int val){
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

    
    void deletion(){
        if(size==0){
            return;
        }

        arr[1]=arr[size];
        size--;
        int i=1;
        while(i<=size){
            int left=2*i;
            int right=2*i+1;
            if(left<size&&arr[i]<arr[left]){
                swap(arr[i], arr[left]);
                i=left;
            }
            else if(right<size&&arr[i]<arr[right]){
                swap(arr[i],arr[right]);
                i=right;
            }
            else{
                return;
            }
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main(){
    cout<<"Enter the number of data for max heap: ";
    int n;
    cin>>n;
    heap h;
    cout<<"Enter the elements of max heap: ";
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        h.insertion(val);
    }
    cout<<"Printing the max heap: ";
    h.print();
    cout<<endl;
    cout<<"Printing the max heap after deletion: ";
    h.deletion();
    h.print();
    cout<<endl;
    return 0;
}
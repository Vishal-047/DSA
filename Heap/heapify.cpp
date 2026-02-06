#include<bits/stdc++.h>
#define vi vector<int>
void heapify(vi &arr, int p,int heapsize){
    int l=2*p+1;
    int r=2*p+2;
    if(l>heapsize || r>heapsize){
        return;
    }
    int largest=p;
    if(arr[l]>arr[largest]) largest=l;
    if(arr[r]>arr[largest]) largest=r;
    if(p!=largest){
    swap(arr[p],arr[largest]);
    heapify(arr,largest,heapsize);}
}

void heapsort(vi &arr){
    int n=arr.size();
    for(int i=n-1;i>=0;i--){
        heapify(arr,i,n);
    }
    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i])
        heapify(arr,0,i-1);
    }
}

int main(){
    vi v({2,3,1,1,5,5})
    heapsort(v);
    for(auto i: v)
        cout<<i<<" ";
    cout<<endl;
}
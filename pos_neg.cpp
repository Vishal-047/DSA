#include<iostream>
using namespace std;

int main()
{
    int *n=new int(), *count=new int(0), *countn=new int(0), *countz=new int(0);
    cin>>*n;
    int *arr=new int[*n];
    for(int i=0;i<*n;i++){
        cin>>arr[i];
        if(arr[i]>0) (*count)++;
        if(arr[i]<0) (*countn)++;
        else if(arr[i]==0) (*countz)++;
    }
    cout<<"positive: "<<*count<<endl;
    cout<<"negative: "<<*countn<<endl;
    cout<<"zero: "<<*countz<<endl;
    delete[] arr;
    delete count;
    delete countn;
    delete countz;
    delete n;
    return 0;
}
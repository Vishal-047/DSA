#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of rows: ";
    cin>>n;
    int m;
    cout<<"Enter the number of column: ";
    cin>>m;
    for(int i=0; i<n; i++){
        for(int j=m; j>=1; j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
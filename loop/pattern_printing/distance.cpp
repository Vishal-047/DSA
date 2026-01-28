#include<bits/stdc++.h>
using namespace std;
int main(){
    int r;
    cout<<"Enter the number of rows: ";
    cin>>r;
    int c;
    cout<<"Enter the number of columns: ";
    cin>>c;
    int x=2, y=3;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            // cout<<i+j<<" "; 
            //Above code prints a matrix where each element is the sum of its row and column indices (i + j), similar to a grid-based distance pattern.
            cout<<abs(i-x)+abs(j-y)<<" "; //This code prints the Manhattan distance of the point (i, j) from the fixed point (2, 3) repeatedly in a matrix.
        }
        cout<<endl;
    }
}

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin>>n;
    // vector<vector<int>> arr(n, vector<int>(n));
    int arr[n][n];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<i+1;j++){
            if(j==0 || j==i){
                arr[i][j]=1;
            }
            else{
                arr[i][j]=arr[i-1][j]+arr[i-1][j-1];
            }
        }
    }
     for (int i = 0; i < n; i++) {
        for (int s = 0; s < n - i - 1; s++)
            cout << " ";
        for (int j = 0; j <= i; j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }
}
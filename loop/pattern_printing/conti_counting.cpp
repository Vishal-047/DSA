#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter number of rows: ";
    cin>>n;
    int m;
    cout<<"Enter number of columns: ";
    cin>>m;
    int count=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cout<<count<<" ";
            count++;
            
        }
        cout<<endl;
        
    }
    
    return 0;
}
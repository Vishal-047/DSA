#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    // for (int i = 0; i <= n; i++)
    // {
    //     if (i==0)
    //     {
    //         continue;
    //     }
        
    //     else if (i%3==0)
    //     {
    //     cout<<"Number divisible by 3 are: "<<" ";
    //     cout<<i<<" ";
    //     }
        
    // }
    // cout<<endl<<"Now their table: "<<endl;
    
    for (int i = 0; i <= n; i++)
    {
        if (i==0)
        {
            continue;
        }
        
        else if (i%3==0)
        {
        cout<<"Table of "<<i<<endl;
            for (int j = 1; j < 11; j++)
            {
                cout<<i<<"*"<<j<<"="<<i*j<<endl;
            }
            cout<<endl;
            
        }
        
    }
    
    return 0;
}

// This code will check whether the number is divisible by 3 or not and then print its table........
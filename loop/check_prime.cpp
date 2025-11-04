#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int i=2;
    int count=0;
    while (i<=n/2)
    {
        if(n%i==0){
            count=1;
            // break;
        }
        
        else{
            count=0;
        }
        i++;
    }
        if(count==1){
            cout<<"Number is not prime";
        }
        else{
            cout<<"Number is Prime";
        }
    
    return 0;
}

    // class Solution {
    //     private:
    //     bool isprime(int n){
    //         if(n<=1){
    //             return false;
    //         }
    //         for(int i=2; i<n;i++){
    //             if(n%i==0){
    //                 return false;
    //             }
    //         }
    //         return true;
    //     }
    // public:
    //     int countPrimes(int n) {
    //         int count =0;
    //         for(int i=2; i<n; i++){
    //         if (isprime(i))
    //         count++;
    //         }
    //         return count;
    //     }
    // };
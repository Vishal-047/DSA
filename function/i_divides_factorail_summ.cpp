#include<iostream>
using namespace std;

void fact(int n){
    float fact=1.0;
    float sum=0.0;
    for(int i=1; i<=n; i++){
        fact*=i;
        float summm=sum+=i/fact;
        cout<<summm<<endl;
        
    }
    cout<<"Total sum: "<<sum;
}
int main()
{
   float n;
   cout<<"Enter the number: ";
   cin>>n;
   fact(n);
    return 0;
}
//This code will print sum of i/i! till n.......
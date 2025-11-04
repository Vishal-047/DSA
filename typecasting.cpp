#include<iostream>
using namespace std;

int main(){
    float a=256.215;
    int b=a;
    cout<<b<<endl;
    cout<<"After typecasting the value of float a in integer: "<<int(a)<<endl;
    cout<<"After typecasting the value of float a in integer: "<<(int)a<<endl;

    int x=547;
    cout<<"The value of x in integer: "<<x<<endl;
    cout<<"The value of int x in float is: "<<float(x)<<endl;

    // The above code will do the typecasting......

    // BElow Reference variable......

    int q=654;
    int &z=q;
    cout<<z;

    return 0;
}
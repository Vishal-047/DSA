#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    const int d=66;
    cout<<"The value of d is: "<<d<<endl;
    // int d=45;
    // cout<<d;
    //We can not change the value of d because it is constant and if we try to do that it will throw an error....

    int x=254;
    int y=48;
    int z=25626;

    cout<<"The value of x is : "<<setw(5)<<x<<endl;
    cout<<"The value of y is : "<<setw(5)<<y<<endl;
    cout<<"The value of z is : "<<setw(5)<<z<<endl;

    return 0;

    // Setw is used to right justify the number so that it looks in order........
    // int setw(5), 5 is the length of the largest value......

}
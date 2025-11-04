#include<iostream>
using namespace std;
int a=455;
int b=55;
void sum(){
    cout<<"\nThe sum is: "<<a+b;        // Here the sum will be 80 because the value of a and b will be taken from global variable.....
}
int main(){
    int a=25;
    int b=58;
    b=85;
    bool is_true=true;
    cout<<"The value of a is "<<a<<" and b is "<<b;
    sum();
    cout<<"\n"<<is_true;
    cout<<"The gloabal value of a is: "<<::a;  //"::" is used to print the global value of any variable......
    return 0;
}

// This code will print the updated value and the sum of two global value.....
// "::"----> is called scope resolution operator......
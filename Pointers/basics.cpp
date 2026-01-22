#include<iostream>
using namespace std;

int main(){
    int n=34;
    int *b=&n;
    cout<<*b<<endl;
    cout<<&b<<endl;
    cout<<&n<<endl;
    cout<<b<<endl;
// Pointer to pointer

    int **c=&b;
    cout<<"C: "<<c<<endl;
    cout<<"*C: "<<*c<<endl; //*c dereferences c giving b
    cout<<"**C: "<<**c<<endl; //**c dereferences b giving the value of c */

    *b=40;
    cout<<"The value of n is: "<<n<<endl;
    cout<<"The value of b is: "<<b<<endl;
    cout<<"The value of *b is: "<<*b<<endl;

    //Array-->

    int arr[100]={1,2,3,4,5};
    int *p1=&arr[0];
    int *p2=p1+2;
    cout<<"The value at 0 index is: "<<*p1<<endl;
    cout<<*p2<<endl;
    *p1=54;
    cout<<"The new value at 0 index is: "<<*p1<<endl;
    return 0;
}
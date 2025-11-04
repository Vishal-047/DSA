#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cin>> a>>b>>c;
    int large;
    if(a>b&&a>c){
        large=a;
    }
    else if(b>a && b>c){
        large=b;
    }
    else{
        large =c;
    }
    cout<<"Largest is: "<<large;
    return 0;
}
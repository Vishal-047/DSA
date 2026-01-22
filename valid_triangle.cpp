#include <iostream>
using namespace std;
int main() {
    int a,b,c;
    cout<<"Enter the 3 sides of the triangle: "<<endl;
    cin>>a>>b>>c;
    if((a+b>c)&&(a+c>b)&&(b+c>a)){
        cout<<"valid sides";
    }
    else{
        cout<<"Invalid sides";
    }
    return 0;
}
#include<iostream>
using namespace std;
enum week{Sunday,Monday, Tuesday, Wednesday, Thursday, Friday, Saturday};

int main(){
    week w;
    w=Thursday;
    cout<<"Day: "<<w+1;
    return 0;
}
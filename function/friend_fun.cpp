#include <iostream>
using namespace std;
class add{
 int a,b,c;
 public:
 void getdata(){
     cin>>a>>b>>c;
 }
 friend void sum(add); // Declaration of friend function.......
};

void sum(add obj){
    int total=(obj.a+obj.b+obj.c)/3; //accessing private data members of the class.
    cout<<"The average is: "<<total;
}
int main() {
    add obj1;
    obj1.getdata();
    sum(obj1); //calling the friend function.....
    return 0;
}
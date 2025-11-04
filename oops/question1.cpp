#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
struct distance1
{
    int x1, x2, y1, y2;
    void getdata(){
        cout<<"Enter 1st cooradinate: ";
        cin>>x1>>x2;
        cout<<"Enter 2nd cooradinate: ";
        cin>>y1>>y2;
    }
    void putdata(){
        float ans1=(x1+y1)/2.0;
        float ans2=(x2+y2)/2.0;
        float res1=(x1-x2);
        float res2=(y1-y2);
        float final=sqrt(res1*res1+res2*res2);
        cout<<"Mid Point: "<<ans1<<","<<ans2<<endl;
        cout<<"Distance: "<<fixed<<setprecision(2)<<final;
    }
};
int main(){
    distance1 d;
    d.getdata();
    d.putdata();
    return 0;
}
// This code will print the distance and mid point of a line segement......
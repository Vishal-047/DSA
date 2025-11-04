#include<iostream>
#include<cmath>
using namespace std;
struct dist
{
    int x1, x2, y1, y2;
    void getdata(){
        cout<<"Enter x1: ";
        cin>>x1;
        cout<<"Enter x1: ";
        cin>>x2;
        cout<<"Enter x2: ";
        cin>>y1;
        cout<<"Enter y1: ";
        cin>>y2;
        cout<<"Enter y2: ";
    }
    void putdata(){
        int ans1=(x1+x2)/2;
        int ans2=(y1+y2)/2;
        int res1=(x1-x2);
        int res2=(y1-y2);
        int final=sqrt(res1*res1+res2*res2);
        cout<<"Mid Point: "<<ans1<<","<<ans2<<endl;
        cout<<"Distance: "<<final;
    }
};
int main(){
    dist d;
    d.getdata();
    d.putdata();
    return 0;
}

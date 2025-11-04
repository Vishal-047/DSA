#include<iostream>
using namespace std;
class A{
    private:
    int a;
    public:
    double geta(){
        cin>>a;
        return a;
    }
};
class B{
    private:
    int b;
    public:
    double getb(){
        cin>>b;
        return b;
    }
};
class C{
    private:
    int c;
    public:
    double getcc(){
        cin>>c;
        return c;
    }
};

class D:public A,public B, public C{
    public:
    void result(){
        int sum;
        sum=geta()+getb()+getcc();
        cout<<sum<<endl;
        double avg;
        avg=sum/3;
        cout<<avg;
    }
};
int main(){
    D d;
    d.result();
    return 0;
}
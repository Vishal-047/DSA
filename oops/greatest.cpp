#include<iostream>
using namespace std;
class second;
class Input
{
    int a, b;
    public:
    void get()
    {
        cin >> a;
        cin>>b;
    }
    friend class second;
};
class second
{
    public:
    void great(Input f)
    {
       if(f.a>f.b){
           cout<<f.a<<" is greatest";
       }
       else{
           cout<<f.b<<" is greatest";
       }
    }
};

int main()
{
    Input obj;
    second obj2;
    obj.get();
    obj2.great(obj);
    return 0;
}

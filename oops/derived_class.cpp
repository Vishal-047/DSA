#include<iostream>
using namespace std;
class vehicle{
    private:
    double dist;
    double tim;
    public:
    double getdist(){
        cin>>dist;
        return dist;
    }
    double gettime(){
        cin>>tim;
        return tim;
    }
};

class car:public vehicle{
    public:
    void result(){
        double speed;
        speed=getdist()/gettime();
        cout<<speed;
    }
};
int main(){
    car c;
    c.result();
    return 0;
}
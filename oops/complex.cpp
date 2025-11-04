// You are using GCC
#include<iostream>
#include<iomanip>
using namespace std;
class Complex{
    float real, img;
    public:
    Complex(){
        real=0;
        img=0;
    }
    void setvalue(float r, float i){
        real=r;
        img=i;
    }
    Complex sum(Complex c1, Complex c2){
        Complex c;
        c.real=c1.real+c2.real;
        c.img=c1.img+c2.img;
        cout<<"Sum of two complex numbers is "<<setprecision(1)<<fixed<<c.real<<"+ "<<c.img<<"i";
    }
    void display(){}
};
int main(){
    Complex c1,c2, c3;
    float r1,i1,r2,i2;
    cin>>r1>>i1>>r2>>i2;
    c1.setvalue(r1,i1);
    c2.setvalue(r2,i2);
    c3.sum(c1,c2);
    
}
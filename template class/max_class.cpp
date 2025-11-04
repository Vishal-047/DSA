#include<iostream>
using namespace std;
template<class t,class t1,class t2>
class maxim{
    public:
    t x;
    t1 y;
    t2 z;
maxim(t a, t1 b, t2 c){
    x=a;
    y=b;
    z=c;
}
t maximum(){
    t maxi = (x > y) ? ((x > z) ? x : z) : ((y > z) ? y:z);
    return maxi;
}
};
int main(){
    int a;
    cin>>a;
    float b;
    cin>>b;
    char c; // ascii value
    cin>>c;
    maxim<int, float, char> m(a,b,c);
    cout<<m.maximum();
}

// #include <iostream>

// using namespace std;

// template<typename T1, typename T2, typename T3>
// class MaxOfThree {
// public:
//     void findMax(T1 a, T2 b, T3 c) {
//         if (a > b && a>c) {
//             cout<<a;
//         }
//        else if(b>a && b>c) {
//             cout<<b;
//         }
//         else{
//             cout<<c;
//         }
//     }
// };

// int main() {
//     int a = 10;
//     double b = 20.5;
//     char c = 'z';
//     MaxOfThree<int,double,char> obj;
//     cout<<"The maximum of three values: "<<endl;
//     obj.findMax(a,b,c);
//     return 0;
// }

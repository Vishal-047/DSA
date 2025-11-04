#include<iostream>
using namespace std;
template<class t>
t minimum(t a,t b,t c){
    t min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b:c);
    return min;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<minimum(a,b,c);
    cout<<endl;
    char x,y,z;
    cin>>x>>y>>z;
    cout<<minimum(x,y,z);
    cout<<endl;
    float m,n,o;
    cin>>m>>n>>o;
    cout<<minimum(m,n,o);
}
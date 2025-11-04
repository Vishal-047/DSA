#include <iostream>
using namespace std;
int factorial(int n){
    int *result=new int(1);
    for(int i=1;i<=n;i++){
        *result*=i;
    }
    int fact=*result;
    delete result;
    return fact;
}
int main() {
    int n;
    cin>>n;
    cout<<factorial(n);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    int r;
    cin>>r;
    for(int i=-r;i<=r;i++){
        for(int j=-r;j<=r;j++){
            if(i*i+j*j<=r*r){
                cout<<"* ";
            }
            else{cout<<"  ";} //2 spaces
        }
        cout<<endl;
    }
}
//This code prints a circle pattern using the mathematical circle equation.
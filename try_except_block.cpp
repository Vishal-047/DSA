#include<iostream>
using namespace std;
void input(int x){
    cout<<"We are inside the function"<<endl;
    if(x<0){
        cout<<"Negative";
    }
    else if(x>0){
        throw 'A';
    }
    else throw 4.5;
}
int main(){
    try{
        cout<<"We are inside the try block"<<endl;
        input(10);
    }
    catch(char ch){
        cout<<"positive"<<endl;
    }
    catch(double i){
        cout<<"Zero"<<endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
class sum{
    int n;
    int count=0, count1=0;
    public:
    void getdata(){
    cout<<"Enter the number: ";
    cin>>n;
    while(n>0){
        int rem=n%10;
        if(rem%2==0){
            count++;
        }
        else{
            count1++;
        }
        n=n/10;}
    }
    void putdata(){
    cout<<"Even: "<<count<<endl;
    cout<<"odd: "<<count1<<endl;
    }
};
int main(){
    sum s;
    s.getdata();
    s.putdata();
    return 0;
}

//This code will print number of even digit and number of odd digit in a number........
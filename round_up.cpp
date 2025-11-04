#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    int n;
    cin>>n;
    string name;
    cin>>name;
    string dob;
    cin>>dob;
    string doj;
    cin>>doj;
    float sal;
    cin>>sal;
    
    cout<<"ID : "<<n<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"DOB : "<<dob<<endl;
    cout<<"DOJ : "<<doj<<endl;
    cout<<"Salary : "<<fixed<<setprecision(1)<<sal<<endl;
    return 0;
    
}


//This code will print the salary in round up format to one decimal point............
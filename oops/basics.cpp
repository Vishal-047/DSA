#include<iostream>
using namespace std;

class student{
    string name;
    int roll;
    float marks;
    public:
    void getdata(string n, int r, float m){
        // getline(cin,name);
        // cin>>roll;
        // cin>>marks;
        //we can take input with cin......... but we have to remove the data written int the getdata function(...); and also remove the data from getdata function inside int main function..........
        name=n;
        roll=r;
        marks=m;
    }
    void putdata(){
        cout<<"You have entered: "<<endl;
        cout<<"name: "<<name<<endl;
        cout<<"roll number: "<<roll<<endl;
        cout<<"marks: "<<marks<<endl;
    }

};
int main(){
    student s;
    s.getdata("vishal", 56,458.2);
    s.putdata();
    return 0;
}
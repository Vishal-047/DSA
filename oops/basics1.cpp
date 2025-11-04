#include<iostream>
#include <string>
using namespace std;

class student{
    string name;
    int roll;
    float marks;
    public:
    void getdata(){
        cin.ignore();//add this line to ignore the newline character left in the input buffer.......
        getline(cin,name);
        cin>>roll;
        cin>>marks;
    }
    void putdata(){
        cout<<"name: "<<name<<endl;
        cout<<"roll number: "<<roll<<endl;
        cout<<"marks: "<<marks<<endl;
    }

};
int main(){
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    student s[n];
    for(int i=0; i<n; i++){
        cout<<"Student "<<i+1<<": ";
        s[i].getdata();
    }
    for(int i=0; i<n; i++){
        cout << "Details of student " << i+1 << ": "<<endl;
        s[i].putdata();
    }
    return 0;
}
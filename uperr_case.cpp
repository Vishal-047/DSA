// You are using GCC
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
class name{
    string na;
    int age;
    string gender;
    public:
    void getdata(){
        getline(cin, na);
        cin>>age;
        cin>>gender;
    }
    void putdata(){
        transform(na.begin(), na.end(), na.begin(), ::toupper);
        transform(gender.begin(), gender.end(), gender.begin(), ::toupper);
        cout<<na<<" ";
        cout<<age<<" ";
        cout<<gender;
    }
};
int main(){
    name n;
    n.getdata();
    n.putdata();
    return 0;
}

// This code will print the name and gender to upper case........
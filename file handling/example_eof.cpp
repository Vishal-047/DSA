#include<iostream>
#include<fstream>
using namespace std;
int main(){
    ofstream fout("sample.txt",ios::out);
    fout<<"India is our country";
    cout<<fout.tellp()<<endl;
    fout<<"He is Ram";
    cout<<fout.tellp()<<endl;
    fout.seekp(-7,ios::beg);
    fout<<"He is going to market";
    cout<<fout.tellp();
    fout.close();
    return 0;
}
#include <iostream>
#include <fstream> 

using namespace std;

int main() {
    ofstream of;


    of.open("result.txt",ios::in | ios::out);
     
    
       of <<"world";

        of.close();
    return 0;
}
Online C++ compiler to run C++ program online

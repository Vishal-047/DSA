#include<iostream>
#include<list>
using namespace std;

int main()
{
    list <int> n;
    list<int> l(5, 10); // 5 element 
    cout<<"list: ";
    for(int i:l){
        cout<<i<<" ";
    }   cout<<endl;
    n.push_back(45);
    n.push_front(41);
    cout<<"list: ";
    for(int i:n){
        cout<<i<<" ";
    }   cout<<endl;

    n.erase(n.begin());
    for(int i:n){
        cout<<i<<" ";
    }   cout<<endl;
    

    return 0;
}
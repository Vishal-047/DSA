#include<iostream>
#include<set>
using namespace std;

int main()
{
    set <int> s;
    s.insert(0);
    s.insert(1);
    s.insert(8);
    s.insert(3);
    s.insert(5);
    s.insert(0);
    s.insert(3);
    s.insert(2);
    cout<<"Elements of the set: ";
    for(auto i:s){
        cout<<i<<" "; //This will print the elements of the set on sorted order and will not repeat the elements.......
    }cout<<endl;

    set<int>:: iterator ite=s.begin();
    ite++;
    s.erase(ite);
    for(auto i:s){
        cout<<i<<" ";
    }
    return 0;
}
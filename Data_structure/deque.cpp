#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int>d;
    d.push_back(2); // last element
    d.push_front(5); //front element
    d.push_back(10); //front element
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    d.pop_back();
    for(int i:d){
        cout<<i<<" "<<endl;
    }

    cout<<"Before erase: ";
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Before erase size: "<<d.size()<<endl;
    d.erase(d.begin()); // erase 1 element
    cout<<"After erase: ";
    for(int i:d){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"After erase size: "<<d.size()<<endl;

    
    return 0;
}
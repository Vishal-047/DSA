#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> a(5,1); // vector contain 5 elements each elements will be 1;
    for(int i:a){
        cout<<i<<" ";
    }cout<<endl;
    cout<<"Empty or not: "<<a.empty()<<endl; /// return 0 which means false i.e not empty;

    vector<int> v;     // Size =0;
    cout<<"Capacity: "<<v.capacity()<<endl;  //capacity 0  capacity means memory assigned to the particular vector.....
    v.push_back(2); //add new elements
    cout<<"Capacity: "<<v.capacity()<<endl; // capacity 1
    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;  //capacity 2
    v.push_back(5);
    cout<<"Capacity: "<<v.capacity()<<endl;  // capacity 4.....because vector earlier vector capacity is 2 and we know vector double its size when adding new element.....
    cout<<"Size: "<<v.size()<<endl;  //size 3
    cout<<"Element at 2nd index: "<<v.at(2)<<endl;
    cout<<"Element at 1st index: "<<v.at(1)<<endl;
    cout<<"Element at 0th index: "<<v.front()<<endl;
    cout<<"Element at last index: "<<v.back()<<endl;
    cout<<"Elements before poping: ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back(); // poping remove the last elements......
    cout<<"Elements after poping: ";
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Before clearing the vector its size was: "<<v.size()<<endl; //output =2.....  we poped the element that's why size was 2..
    v.clear();
    cout<<"After clearing the vector its size is: "<<v.size()<<endl;

    
    return 0;
}
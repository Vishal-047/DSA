#include<iostream>
#include<queue>
using namespace std;

int main()
{
    queue<string> q;
    q.push("Vishal");
    q.push("Singh");
    q.push("b.tech");
    cout<<"Top element: "<<q.front()<<endl; //queue work on the concept first in and first out..........
    cout<<"Top element: "<<q.back()<<endl;
    cout<<"Size of queue: "<<q.size()<<endl;

    q.pop();
    cout<<"Top element: "<<q.front()<<endl;
    cout<<"Size of queue after pop: "<<q.size()<<endl;
    return 0;
}
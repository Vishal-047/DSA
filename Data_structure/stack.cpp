#include<iostream>
#include<stack>
using namespace std;

int main()
{
    stack<string> s;
    s.push("Vishal");
    s.push("Singh");
    s.push("BTech");
// Unlike other containers such as vectors or lists, stack does not provide iterators, To access its elements, we have to use a different approach.
    // while (!s.empty()) {
    //     cout << s.top() << " ";
    //     s.pop(); // if we don't pop the elements their will be infinite loop and only BTech will be printed..........
    // }
    // cout << endl;


    cout<<"Top element: "<<s.top()<<endl; // Stack work on the concept "last in first out" that's why top element will be BTech......
    cout<<"Size of the stack: "<<s.size()<<endl; //size will be 3

    s.pop();
    cout<<"Top element after poping: "<<s.top()<<endl;

    cout<<"Size of the stack: "<<s.size()<<endl; // size will be 2
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_set<int>s;
    int n;
    cout<<"Enter the number of element: ";
    cin>>n;
    cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int m;
        cin>>m;
        s.insert(m);
    }
    for(auto i=s.begin(); i!=s.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    for (int x : s) {
    cout << x << " in bucket " << s.bucket(x) << endl;
    }
}
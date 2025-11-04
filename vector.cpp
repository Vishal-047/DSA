#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        v.push_back(input);
    }
    int target=1;
    if (target >= 0 && target < n) { v.insert(v.begin() + target + 0, 5);} // Insert 5 after the target index
    for(int i=0;i<=n;i++){
        cout<<v[i]<<" ";
    }
    
    return 0;
}
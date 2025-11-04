#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.emplace_back(3);
    for(int i=0;i<v.size(); i++){
        cout<<v[i];
    }
    cout<<endl;
    vector<pair<int,int>>ve;
    ve.push_back({1,2});
    ve.emplace_back(3,3);
    for(int i=0;i<ve.size();i++){
        cout<<ve[i].first<<ve[i].second;
    }
    cout<<endl;
    vector<int>vi(5,100);
     for(int i=0;i<vi.size(); i++){
        cout<<vi[i];
    }
    cout<<endl;
    vector<int>v1(5);
     for(int i=0;i<v1.size(); i++){
        cout<<v1[i];
    }
    cout<<endl;
    vector<int>v2(v);
     for(int i=0;i<v2.size(); i++){
        cout<<v2[i];
    }
    
    return 0;
}
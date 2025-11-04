#include<iostream>
#include<list>
using namespace std;
void removeElement(list<int>&a,int ele){
    a.remove(ele);
}
int main(){
    int n;
    cin>>n;
    list<int>a;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        a.push_back(input);
    }
    int ele;
    cin>>ele;
    removeElement(a,ele);
    for(int num:a){
        cout<<num<<" ";
    }
}
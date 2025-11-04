#include<iostream>
using namespace std;
void reverse(char name[], int n){
    for(int i=0; i<n/2; i++){
        int temp=name[i];
        name[i]=name[n-i-1];
        name[n-i-1]=temp;
    }
    cout<<name;
}

int main()
{
    char name[20];
    cout<<"Enter your name: ";
    cin>>name;


    int count=0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    cout<<count<<endl;

    reverse(name,count);
    return 0;
}
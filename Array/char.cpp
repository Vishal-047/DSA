#include<iostream>
using namespace std;

int main()
{
    char a[20];
    
    cout<<"Enter your name: ";
    cin>>a;

    cout<<"Your name is: ";
    cout<<a<<endl;  // If we enter our full name the output will be characters before space because of null character.........

    // To find the size of the string.......
    int count=0;
    for(int i=0; a[i]!='\0'; i++){
        count++;
    }
    cout<<"Length of the string: "<<count<<endl;
    // If we add null character at any specific place then the compiler will stop at that place.......

    a[2]='\0';
    cout<<a;
    return 0;
}
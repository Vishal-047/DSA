#include<iostream>
using namespace std;
void palindrome(char name[], int n){
    int i=0; int j=n-i-1; bool ispalindrome=true;
    while(i<j){
        if(name[i]!=name[j])
        {ispalindrome=false;
        break;}
        i++;j--;
    }
    if(ispalindrome) cout<<"Palindrome";
    else cout<<"Not palindrome";
}

int main()
{
    char name[20];
    cout<<"Enter the string: ";
    cin>>name;
    int count=0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    palindrome(name, count);

    return 0;
}
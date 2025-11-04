#include<iostream>
using namespace std;
void maxchr(string s){
    int array[26]={0};

    for(int i=0; i<s.length();i++){
        char ch=s[i];
        int number=0;
        if(ch>='a' && ch<='z'){
            number=ch-'a';
        }
        else{
            number=ch-'A';
        }
        array[number]++;
    }
    int max=-1, ans=0;
    for(int i=0;i<26; i++){
        if(max<array[i]){
            max=array[i];
            ans=i;
        }
    }

    char ANS='a'+ans;
    cout<<"Maximum occuring character in the string: "<<ANS<<endl;
}

int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    maxchr(s);
    return 0;
}
//This will print that which caracter is occuring maximum number of time.........
#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
    if(s.size()!=t.size()) return false;
    char arr[26]={0};
    //Assuming user may provide both uppercase as well as lowercase....
    for(char &ch:s){
        ch=tolower(ch);
    }
    for(char &ch:t){
        ch=tolower(ch);
    }
    for(char ch:s){
        arr[ch-'a']++;
    }
    for(char ch:t){
        arr[ch-'a']--;
    }

    for(int i:arr){
        if(i!=0) return false;
    }
    return true;
}

int main(){
    cout<<"Enter the 1st string value: ";
    string s;
    cin>>s;
    cout<<"Enter the 2nd string value: ";
    string t;
    cin>>t;
    if(isAnagram(s,t)) cout<<"Anagram";
    else cout<<"Not Anagram";
    return 0;
}
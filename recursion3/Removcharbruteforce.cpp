#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    s="akash sharma";
    string str="";
    for(int i=0;i<s.length();i++){
        if(s[i]!='a')str+=s[i];
    }
    cout<<str;
}
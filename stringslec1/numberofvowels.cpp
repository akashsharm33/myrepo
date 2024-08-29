#include<iostream>
using namespace std;
int main(){
    //string s="akash";
    string s;
    getline(cin,s);
    int c=0;
    int i=0;
    while(s[i]!='\0'){
      if(s[i]=='a'||s[i]=='i'||s[i]=='0'||s[i]=='u'){
        c++;
      }
        i++;
      
    }
    cout<<"vowels are";
    cout<<c;
}
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  string s;
  getline(cin,s);
  for(int i=0;i<s[i]!='\0';i++){
    if(i%2==0)s[i]='a';
  }
   cout<<s;
}
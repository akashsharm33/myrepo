#include<iostream>
#include<algorithm>
using namespace std;
int main(){
  string s;
  getline(cin,s);
  string str;
   for(int i=0;i<s.size();i++){
    if(s[i]>='X'){
        str.push_back(s[i]);
    }
   }
   sort(str.begin(),str.end());
   cout<<str;

}
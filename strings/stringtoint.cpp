#include<iostream>
#include<string>
using namespace std;
int string_to_int(string s){
  int num=0;
  for(char c:s){
    num=num*10+(c-'0');
  }
  return num;
}
int main(){
string s="1234";
 cout<<string_to_int(s);
}
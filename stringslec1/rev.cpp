#include<iostream>
#include<string>
using namespace std;
bool is_pal(string s){
   int i=0;
   int j=s.size()-1;
   while(i<j){
      if(s[i]!=s[j]) return false;
      i++;
      j--;
   }
}
int main(){
 string s;
 getline(cin,s);
 if(is_pal(s)==true){
   cout<<"yes it is a palindrome number";
 }
 else{
   cout<<"no it is not a palindrome number";
 }
}
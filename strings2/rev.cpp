#include<iostream>
#include<string>
using namespace std;
bool is_vowel(char ch){
  ch=tolower(ch);
  return(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');

}
int main(){
  string s;
  getline(cin,s);
  string result;
  result="";
  for(char ch:s){
    if(!is_vowel(ch)){
      result+=ch;
    }

  }
  cout<<"the string without the vowel is"<<result;
}
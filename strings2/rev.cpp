#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
  string s;
  cout<<"enter the string of the digits";
  getline(cin,s);
  int first=-1;
  int second=-1;
  for(char ch:s){
    int d=ch-'0';

    if(d>first){
      first=d;
      second=first;
    }
    else if(d>second && d!=first){
      second=d;
    }

  }
  cout<<"largest digit is"<<first;
  cout<<"second largest digit is"<<second;


}

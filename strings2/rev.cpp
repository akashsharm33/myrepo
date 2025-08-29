#include<iostream>
#include<string>
using namespace std;
int main(){
  string s;
  cout<<"enter the string of the digits";
  cin>>s;
  int second =-1,first=-1;
  for(char ch :s){
    int d=ch -'0';

    if(d>first){
      second=first;
     first=d;
    }
    else if(d>second&&d!=first){
      second=d;
    }
  }
  if(second==-1)cout<<"ther is no second largest element";
  else cout<<"the largest element is "<<second;
  cout<<"the largest element is "<<first;
}

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
  string s="aei";
   string t;
   t=s.substr();
   int count=0;
   for(int i=0;t[i]!='\0';i++){
    if(t[i]=='a'||t[i]=='e'||t[i]=='u'||t[i]=='i'||t[i]=='o'){
        count++;
    }
    
   }
   cout<<count;

}


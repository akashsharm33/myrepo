#include<iostream>
#include<string>
using namespace std;
void removechr(string ans,string original){
  if(original.length()==0){
    cout<<ans<<endl;
    return;
  }
  char ch=original[0];
 removechr(ans+ch,original.substr(1));
 removechr(ans,original.substr(1));
}
int main(){
  string str="akash";
  removechr("",str);
}

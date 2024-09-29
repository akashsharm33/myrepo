#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
 int n=3;
void generate(string s){
    if(s.length()==n){
        cout<<s<<endl;
        return;
    }
    generate(s+'0');
    if(s==""||s[s.length()-1]=='0')generate(s+'1');//last chracter agr 0 hai tab 1 push karega mein 
}
int main(){
   
    generate("");
}
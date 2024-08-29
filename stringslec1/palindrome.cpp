#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool is_pal(string s){
int i=0;
int j=s.length()-1;
while(i<j){
    if(s[i]!=s[j])return false;
    i++;
    j--;
}
return true;
}

int main(){
    string s;
    getline(cin,s);
    if(is_pal(s)==true){
        cout<<"yahoo";
    }
    else{
        cout<<"no";
    }

}
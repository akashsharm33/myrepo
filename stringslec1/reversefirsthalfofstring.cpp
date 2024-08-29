#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    int n=s.length();
    getline(cin,s);
    reverse(s.begin(),s.begin()+n/2);
    cout<<s;
}

#include<iostream>
#include<string>
using namespace std;
void removechar(string ans,string original){
    if(original.length()==0){
        cout<<ans;
        return;
    }
    char ch=original[0];
    if(ch=='a')removechar(ans,original.substr(1));//1st character ko skip mar doo//by using substr(1)
    else removechar(ans+ch,original.substr(1));
}
int main(){
    string str="Raghav garg";
    removechar("",str);
}
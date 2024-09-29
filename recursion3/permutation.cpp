#include<iostream>
using namespace std;
void permutations(string ans,string original){
    //abc
    if(original==""){
        cout<<ans<<endl;
        return;
    }
    for(int i=0;i<original.length();i++){
        char ch=original[i];
        string left=original.substr(0,i);
        string right=original.substr(i+1);
        permutations(ans+ch,left+right);
    }

}
int main(){
string str="abc";
 permutations("",str);
// cout<<str.substr(1,2);//a is inclusive 
}
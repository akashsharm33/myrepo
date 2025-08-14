#include<iostream>
using namespace std;
void permutations(string ans,string original){
    if(original==""){
         cout<<ans<<" "<<endl;
    }
}
int main(){
    string str="abc";
    permutations("",str);
}
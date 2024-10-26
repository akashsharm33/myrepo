#include<iostream>
using namespace std;
int binary_to_string(string &str){
    int n=str.size();
    int result=0;
    for(int i=n-1;i>=0;i--){
        char ch=str[i];
        int num=ch-'0';
        result=result+num*(1<<(n-i-1));
    }
    return result;
}
string decimal_to_binary(int num){
    string result="";
    while(num>0){
        if(num%2==0){
            result="0"+result;
        }
        else{
            result="1"+result;
        }
        num=num/2;
    }
    return result;
}
int main(){
    string str="1101";
    cout<<binary_to_string(str)<<endl;
    cout<<decimal_to_binary(13)<<endl;
}
#include<iostream>
#include<string>
using namespace std;
bool isvowel(char ch){
    ch=tolower(ch);
    return (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
}
int main(){
    string s;
    cout<<"enter the string";
    getline(cin,s);
    string result;
    result="";

    for(char ch:s){
        if(!isvowel(ch)){

         result+=ch;
        }
    }
    cout<<"the string without vowels is"<<result;

}
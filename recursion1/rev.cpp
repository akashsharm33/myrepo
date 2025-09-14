#include<iostream>
using namespace std;
 bool power(int a,int b){
    if(b==0)return 1;
    else return a*power(a,b-1);
 }
int main(){
    int a;
    cout<<"enter the base";
    cin>>a;
    int b;
    cout<<"enter the expoenent";
    cin>>b;
    power(a,b);
}
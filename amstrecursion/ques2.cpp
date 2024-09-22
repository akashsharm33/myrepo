#include<iostream>
using namespace std;
void sum1(int a,int b){
    if(a>b)return;
    if(a%2!=0)cout<<a<<" ";
    sum1(a+1,b);
}
int main(){
     sum1(1,5);
}
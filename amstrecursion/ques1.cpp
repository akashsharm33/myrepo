#include<iostream>
using namespace std;
void print(int n){
    if(n==0)return;
   cout<<n;
    print(n-1);
     
}
void print1(int n){
    if(n==0)return;
   
    print1(n-1);
     cout<<n;
}
int main(){
   
    print1(5);
     print(4);
}
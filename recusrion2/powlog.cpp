#include<iostream>
using namespace std;
int pow(int x,int n){
    if(n==0)return 1;
    return x*pow(x,n-1);
}
int main(){
    // 1 1 2 3 5 8 13 21 34 
    cout<<pow(2,8);
}
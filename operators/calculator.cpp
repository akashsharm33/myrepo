#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    cout<<"enter operation";
    char c;
    cin>>c;
    if(c=='+'){
        cout<<"addition is"<<a+b;
    }
    else if(c=='-'){
        cout<<"substraction is"<<a-b;
    }
    else if(c=='*'){
        cout<<"multiplication is"<<a*b;
    }
    else{
        cout<<"invalaid ";
    }
}
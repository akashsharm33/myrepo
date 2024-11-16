#include<iostream>
#include<stack>
using namespace std;
int pr(char ch){
    if(ch=='+'||ch=='-')return 1;
    else return 2;
}
int solve(int val1,int val2,int ch){
    if(ch=='+')return val1+val2;
    else if(ch=='-')return val1-val2;
    else if(ch=='*')return val1*val2;
    else return val1/val2;
}
int main(){
    string s="2+6*4/8-3";
    stack<int>val;
    stack<char>op;
    for(int i=0;i<s.length();i++){
       
        if(s[i]>=48&&s[i]<=57){
            val.push(s[i]-48);//it will give actual value;
        }
        else{
            if(op.size()==0||pr(s[i])>pr(op.top()))op.push(s[i]);
          else{
            //val1opval2
            while(op.size()>0&&pr(s[i])<=pr(op.top())){
                char ch=op.top();
                op.pop();
                int val2=val.top();
                val.pop();
                int val1=val.top();
                val.pop();
                int ans=solve(val1,val2,ch);
                val.push(ans);
            }
            op.push(s[i]);
          }
        }
    }
    //the opertaor stack can have some vaulues so make it empty
    while(op.size()>0){
         char ch=op.top();
                op.pop();
                int val2=val.top();
                val.pop();
                int val1=val.top();
                val.pop();
                int ans=solve(val1,val2,ch);
                val.push(ans);
    }
    cout<<val.top();

}
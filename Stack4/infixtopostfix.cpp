#include<iostream>
#include<stack>
using namespace std;
int pr(char ch){
    if(ch=='+'||ch=='-')return 1;
    else return 2;
}
string solve(string val1,string val2,char ch){
    //we have to store prefix in the ans;
    //op v1 v2;
    string s="";

    s+=val1;
    s+=val2;
        s.push_back(ch);
    return s;
}
int main(){
    string s="(7+9)*4/8-3";
    stack<string>val;
    stack<char>op;
    for(int i=0;i<s.length();i++){
       
        if(s[i]>=48&&s[i]<=57){
            val.push(to_string(s[i]-48));//it will give actual value;
        }
        else{
            if(op.size()==0)op.push(s[i]);
           else if(s[i]=='(')op.push(s[i]);
           else if(op.top()=='(')op.push(s[i]);
           else if(s[i]==')'){
                while(op.top()!='('){
                    //work
                                    //work
                char ch=op.top();
                op.pop();
            string val2=val.top();
                val.pop();
                string val1=val.top();
                val.pop();
                string ans=solve(val1,val2,ch);
                val.push(ans);
                }
                op.pop();//opening bracket ko bhi uda dala
            }
            else if(pr(s[i])>pr(op.top()))op.push(s[i]);
      
          else{
            //val1opval2
            while(op.size()>0&&pr(s[i])<=pr(op.top())){
                //work
                char ch=op.top();
                op.pop();
                string val2=val.top();
                val.pop();
                string val1=val.top();
                val.pop();
                string ans=solve(val1,val2,ch);
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
                string val2=val.top();
                val.pop();
                string val1=val.top();
                val.pop();
                string ans=solve(val1,val2,ch);
                val.push(ans);
    }
    cout<<val.top()<<endl;


}
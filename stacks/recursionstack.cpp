#include<iostream>
#include<stack>
using namespace std;
void displayrev(stack<int>&st){
if(st.size()==0)return;
int x=st.top();
cout<<x<<" ";
st.pop();
displayrev(st);
st.push(x);
cout<<endl;
}

void display(stack<int>&st){
if(st.size()==0)return;
int x=st.top();

st.pop();
display(st);
cout<<x<<" ";
st.push(x);
}
void pushatbottom(stack<int>st,int val){
if(st.size()==0){
    st.push(val);
    return;
}

int x=st.top();

st.pop();
pushatbottom(st,val);
st.push(x);
}

int main(){
    stack<int>st;
    st.push(10);
     st.push(20);
      st.push(30);
       st.push(40);
       displayrev(st);
       display(st);
       cout<<endl;
       pushatbottom(st,-10);
       display(st);
}
#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>st){
      stack<int>temp;
   while(st.size()>0){
   // cout<<st.top()<<" ";
    temp.push(st.top());
    st.pop();
   }
   cout<<endl;
   while(temp.size()>0){
     cout<<temp.top()<<" ";
    st.push(temp.top());
     temp.pop();
   }
}
int main(){
    stack<int>st;
    st.push(10);
   
     st.push(20);
     st.push(30);
     st.push(50);
  stack<int>gt;
  stack<int>rt;
  print(st);
  //empty st into gt;
  while(st.size()>0){
    gt.push(st.top());
    st.pop();
  }
  //empty gt into rt
  while(gt.size()>0){
    rt.push(gt.top());
    gt.pop();
  }
  //empty rt into st;
   while(rt.size()>0){
    st.push(rt.top());
    rt.pop();
  }
  print(st);

}
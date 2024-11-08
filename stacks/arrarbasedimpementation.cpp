#include<iostream>
using namespace std;
class Stack{//user defined DS;
public:
int arr[5];

int idx;
Stack(){
    idx=1;
}

void push(int val){
    if(idx==sizeof(arr)/sizeof(arr[0])){
        cout<<"stack is full";
        return;
    }
    idx++;
    arr[idx]=val;
}
void pop(){
    if(idx==-1){
        cout<<"stack is empty";
        return;
    }
    idx--;
}
int top(){
    return arr[idx];
}
int size(){
return idx+1;
}
void display(){
    for(int i=0;i<=idx;i++){
        cout<<arr[i]<<" "<<endl;
    }
}
};
int main(){
Stack st;

st.push(10);
st.push(20);
st.push(30);
cout<<st.size();
st.display();
}
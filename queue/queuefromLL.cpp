#include<iostream>
using namespace std;
class Node{//user defined dta type
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;

    }
};
class Queue{//user defined data structure;
public:
Node*head;
Node*tail;
int size;
Queue(){
head=tail=NULL;
size=0;
}
void push(int val){
Node*temp=new Node(val);
if(size==0)head=tail=temp;
else{
    tail->next=temp;
    tail=temp;
}
size++;
}


void display(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void pop(){
    if(size==0)cout<<"empty";
    head=head->next;
    size--;
}


int front(){
    if(size==0){
        cout<<"queue is emptyy";
        return -1;
    }
    return head->val;
}
int back(){
    if(size==0){
        cout<<"queue is emptyy";
        return -1;
    }
    return tail->val;
}



};
int main(){
   Queue q;
    //push
    //pop
    //front
    q.push(10);
     q.push(20);
      q.push(30);
      q.push(40);
      q.push(50);
      q.push(60);
      q.display();
      q.pop();
}
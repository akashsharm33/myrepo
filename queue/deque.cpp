#include<iostream>
using namespace std;
class Node{//user defined dta type
    public:
    int val;
    Node*next;
    Node*prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;

    }
};
class Deque{//user defined data structure;
public:
Node*head;
Node*tail;
int size;
Deque(){
head=tail=NULL;
size=0;
}
void pushback(int val){
Node*temp=new Node(val);
if(size==0)head=tail=temp;
else{
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
size++;
}
void pushfront(int val){
Node*temp=new Node(val);
if(size==0)head=tail=temp;
else{
    temp->next=head;
    head->prev=temp;
    head=temp;
}
size++;
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

void display(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void popfront(){
    if(size==0)cout<<"empty";
    head=head->next;
    if(head)head->prev=NULL;
    if(head==NULL)tail=NULL;
    size--;
}


void popback(){
    if(size==0){
        cout<<"empty";
        return;
    }
    else if(size==1){
        popfront();
        return;

    }
    Node*temp=tail->prev;
    temp->next=NULL;
    tail=temp;
    size--;
}
};
int main(){
Deque dq;
dq.pushback(10);
dq.pushback(20);
dq.pushback(30);
dq.display();
dq.popback();
dq.display();


}
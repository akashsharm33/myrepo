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
class DLL{//user defined data structure;
public:
Node*head;
Node*tail;
int size=0;
DLL(){
head=tail=NULL;
size=0;
}
void insertattail(int val){
Node*temp=new Node(val);
if(size==0)head=tail=temp;
else{
    tail->next=temp;
    temp->prev=tail;
    tail=temp;
}
size++;
}
void insertathead(int val){
Node*temp=new Node(val);
if(size==0)head=tail=temp;
else{
    temp->next=head;
    head->prev=temp;
    head=temp;
}
size++;
}
void insertatidx(int idx,int val){
if(idx<0||idx>size){
    cout<<"invalid";
 
}
else if(idx==0){insertathead(val);

}
else if(idx==size-1.){insertattail(val);
}
else{
   Node*t=new Node(val);
   Node*temp=head;
   for(int i=1;i<=idx-1;i++){
    temp=temp->next;

   }
   t->next=temp->next;
   temp->next=t;
   t->prev=temp;
   t->next->prev=t;
   size++;
}

}
void display(){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteathead(){
    if(size==0)cout<<"empty";
    head=head->next;
    head->prev=NULL;
    size--;
}
int getidx(int idx){
    if(idx<0||idx>=size){cout<<"invalid idx"<<endl;
    return -1;
}
else if(idx==0)return head->val;
else if(idx==size-1)return tail->val;
else{
    Node*temp=head;
    for(int i=1;i<=idx;i++){
        temp=temp->next;
    }
    return temp->val;
}
}
void deleteattail(){
    if(size==0){
        cout<<"empty";
        return;
    }
    Node*temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp=tail->prev;
    temp->next=NULL;
    tail=temp;

    size--;
}
void deleteatidx(int idx){
    if(size==0)cout<<"empty";
    if(idx<0||idx>=size){
        cout<<"invalid idx";
    }
    else if(idx==0)return deleteathead();
    else if(idx==size-1)return deleteattail();
    else{
        Node*temp=head;
        for(int i=1;i<=idx-1;i++){
    temp=temp->next;

   }
   temp->next=temp->next->next;
   temp->next->prev=temp;
   size--;
    }
}

};
int main(){
    DLL list;
    list.insertattail(10);
     list.insertattail(20);
      list.insertattail(30);
       list.insertattail(40);
       list.display();
       list.insertathead(11);
       list.display();
       list.insertatidx(2,12);
       list.display();
       list.deleteathead();
       list.display();
       list.deleteattail();
       list.display();
       list.deleteatidx(1);
       list.display();

}
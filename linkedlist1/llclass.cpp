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
class Linkedlist{//user defined data structure;
public:
Node*head;
Node*tail;
int size=0;
LinkedList(){
head=tail=NULL;
size=0;
}
void insertatend(int val){
Node*temp=new Node(val);
if(size==0)head=tail=temp;
else{
    tail->next=temp;
    tail=temp;
}
size++;
}
void insertathead(int val){
Node*temp=new Node(val);
if(size==0)head=tail=temp;
else{
    temp->next=head;
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
else if(idx==size-1.){insertatend(val);
}
else{
   Node*t=new Node(val);
   Node*temp=head;
   for(int i=1;i<=idx-1;i++){
    temp=temp->next;

   }
   t->next=temp->next;
   temp->next=t;
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
   size--;
    }
}

};
int main(){
    Linkedlist ll;
    
    ll.insertatend(10);
    ll.display();
    ll.insertatend(20);

    ll.display();
     ll.insertathead(22);
     ll.display();
    //cout<<ll.size;
    ll.insertatidx(2,80);
    ll.display();
    //cout<<ll.getidx(3)<<endl;
    ll.deleteathead();
     ll.display();
     ll.deleteattail();
     ll.display();
     ll.deleteatidx(1);
     ll.display();
}
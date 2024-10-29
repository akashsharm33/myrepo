#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;
    Node(int val){
        this->val=val;
        this->next=NULL;

    }
};
class LinkedList{
    public:
   Node*head;
   Node*tail;
   int size;
   LinkedList(){
    head=tail=NULL;
    size=0;
   } 
   void insertattail(int val){
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
    if(idx<0||idx>=size){
        cout<<"invalid index";
    }
    else if(idx==0)insertathead(val);
    else if(idx==size)insertattail(val);
    else{
        Node*t=new Node(val);
        Node*temp=head;
        for(int i=1;i<=idx-1;i++){
            temp=temp->next;
        }
        t->next=temp->next;
        temp->next=t;

    }
    size++;
   }
   void deleteathead(){
       if(size==0){
        cout<<"list is empty bro ";
       }
       head=head->next;
       size--;
   }
   void deleteattail(){
    if(size==0)cout<<"empty";
    else{
        Node*temp=head;
        while(temp->next!=tail){
            temp=temp->next;
        }
        temp->next=NULL;
        tail=temp;
        size--;
    }
   }
   void deleteatidx(int idx){
    if(idx<0||idx>=size)cout<<"invalid index";
    else if(idx==0)deleteathead();
    else if(idx==size-1)deleteattail();
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
    LinkedList ll;
    ll.insertattail(48);
    ll.display();
    ll.insertathead(11);
     ll.display();
     ll.insertatidx(1,44);
      ll.display();
      ll.deleteathead();
       ll.display();
       ll.deleteattail();
       ll.display();
       ll.deleteatidx(0);
        ll.display();
}
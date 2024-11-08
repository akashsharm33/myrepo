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
class LL{
  public:
  Node*head;
  Node*tail;
  int size;
  LL(){
    head=tail=NULL;
    size=0;
  }
  void insertathead(int val){
    Node*temp=new Node(val);
    if(size==0)tail=head=temp;
    else{
        temp->next=head;
        head=temp;

    }
    size++;
  } 
  void insertatail(int val){
    Node*temp=new Node(val);
    if(size==0)tail=head=temp;
    else{
        tail->next=temp;
        tail=temp;

    }
    size++;
  } 
  void insertatidx(int idx,int val){
      if(idx<0||idx>size){
    cout<<"invalid";
 
}
else if(idx==0){insertathead(val);

}
else if(idx==size-1){insertatail(val);
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
};
int main(){
    LL list;
    list.insertathead(10);
     list.insertathead(20);
      list.insertathead(30);
      list.display();
      list.insertatail(33);
      list.display();
      list.insertatidx(2,77);
      list.display();


}
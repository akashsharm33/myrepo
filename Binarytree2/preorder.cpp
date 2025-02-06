#include<iostream>
#include<climits>
using namespace std;
class Node{
    public:
    int val;
    Node*left;
    Node*right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
void  postorder(Node*root)//work(Node*root){
{
    if(root==NULL)return;
    
    postorder(root->left);//call
     postorder(root->right);//call
      cout<<root->val<<" ";//work
}
void  inorder(Node*root)//work(Node*root){
{
    if(root==NULL)return;
    
    inorder(root->left);//call
     cout<<root->val<<" ";//work
     inorder(root->right);//call
     
}
//work(Node*root){
int main(){
    Node*a=new Node(1);
    Node*b=new Node(2);
    Node*c=new Node(3);
    Node*d=new Node(4);
    Node*e=new Node(5);
    Node*f=new Node(6);
    Node*g=new Node(7);
    a->left=b;
    a->right=c;
    b->left=d;
    b->right=e;
    c->left=f;
    c->right=g;
    cout<<endl;
    postorder(a);
    cout<<endl;
    inorder(a);
}
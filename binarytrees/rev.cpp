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
        this->right=NULL;
        this->left=NULL;      
    }
};
void displaytree(Node*root){
    if(root==NULL)return ;
    cout<<root->val<<" ";
    displaytree(root->left);
    displaytree(root->right);

}
int sum(Node*root){
    if(root==NULL)return 0;
    return root->val+sum(root->left)+sum(root->right);
}
int size(Node*root){
    if(root==NULL)return 0;
    return 1+size(root->left)+size(root->right);
}
int maxintree(Node*root){
   if(root==NULL) return INT_MIN;
    int lmax=maxintree(root->left);
    int rmax=maxintree(root->right);
    return max(root->val,max(lmax,rmax));
}
int minintree(Node*root){
   if(root==NULL) return INT_MAX;
    int lmax=maxintree(root->left);
    int rmax=maxintree(root->right);
    return min(root->val,min(lmax,rmax));
}
int product(Node*root){
    if(root==NULL)return 1;
    return root->val*product(root->left)*product(root->right);
}
int levels(Node*root){
    if(root==NULL)return 0;
    return 1+max(levels(root->left),levels(root->right));
}

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
    displaytree(a);
    cout<<endl;
    cout<<sum(a)<<endl;
    cout<<size(a)<<endl;
    cout<<minintree(a)<<endl;
    cout<<product(a)<<endl;
    cout<<levels(a);
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    return ;
}
// void reverse(vector<int>&v1){
//     int i=0;
//     int j=v1.size()-1;
//     while(i<j){
//         int temp=v1[i];
//         v1[i]=v1[j];
//         v1[j]=temp;
//         i++;
//         j--;
//     }
//     return ;
// }
void reversepart(int i,int j,vector<int>&v2){
      while(i<=j){
        int temp=v2[i];
        v2[i]=v2[j];
        v2[j]=temp;
        i++;
        j--;
      }
      return;
}
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(2);

    v.push_back(3);

    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    display(v);
    // reverse(v);
    // display(v);
    // reversepart(0,3,v);
    // display(v);
    //rotate an array;
    int k=2;
    int n=v.size();
    reversepart(0,n-k-1,v);
    reversepart(n-k,n-1,v);
    reversepart(0,n-1,v);
    display(v);




}
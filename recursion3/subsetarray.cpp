#include<iostream>
#include<vector>
using namespace std;
void printsubset(int arr[],int n,int idx,vector<int>ans){
    //har time nya vector bangea toh elemets add honge toh add mat dalo vro
if(idx==n){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return;
}
printsubset(arr,n,idx+1,ans);
ans.push_back(arr[idx]);
printsubset(arr,n,idx+1,ans);
}
int main(){
int arr[]={1,2,3};
int n=3;
vector<int>v;
printsubset(arr,n,0,v);


}
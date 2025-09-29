#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void sortpart(int i,int j,vector<int>&v){
   sort(v.begin(),v.end());
}
int main(){
    vector<int>v;
    int k=4;
    int n=v.size();
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    sortpart(0,k,v);
      for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}
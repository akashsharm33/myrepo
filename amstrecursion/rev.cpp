#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"no of rows";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==j||i+j==10)cout<<"*";
            else cout<<" ";
        }
        cout<<endl;
    }
}
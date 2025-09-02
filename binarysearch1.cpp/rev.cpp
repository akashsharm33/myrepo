#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={0,0,1,1,1};
    int n=5;
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }
    }
    cout<<count;
}
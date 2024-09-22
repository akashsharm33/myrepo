#include<iostream>
using namespace std;
int main(){
    int arr[]={0,11,22,33,44,56};
    int n=6;
    int x=23;
    int lo=0;
    int hi=n-1;
    bool flag=false;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==x){
            flag=true;
            cout<<arr[mid-1];
            break;
        }
        else if(arr[mid]<x)lo=mid+1;
        else hi=mid-1;


    }
    cout<<arr[lo];
}
  
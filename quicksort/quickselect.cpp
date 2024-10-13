#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotele=arr[si];
   int count=0;
    for(int i=si+1;i<=ei;i++){
        if(arr[i]<=pivotele)count++;
    }
    int pivotidx=count+si;
    swap(arr[si],arr[pivotidx]);
    int i=si;
    int j=ei;
    while(i<pivotidx&&j>pivotidx){
        if(arr[i]<=pivotele)i++;
        if(arr[j]>pivotele)j--;
        else if(arr[i]>pivotele&&arr[j]<=pivotele){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
        }
        return pivotidx;
}
int kthsmallest(int arr[],int si,int ei,int k){
    
    int pi=partition(arr,si,ei);
    if(pi+1==k)return arr[pi];
    kthsmallest(arr,si,pi-1,k);
    kthsmallest(arr,pi+1,ei,k);
}
int main(){
    int arr[]={11,2,3,55,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    int k=4;
    cout<<kthsmallest(arr,0,n-1,k);
}
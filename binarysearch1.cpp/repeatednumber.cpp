#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int lo=0;
    int hi=n-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid+1)
            lo=mid+1;
        if(arr[mid]==mid){
            if(arr[mid-1]==arr[mid]){
                cout<<arr[mid];
                break;
            }
            else hi=mid-1;
        }
    }
}
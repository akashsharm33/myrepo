#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};//O(n)
    int n=5;
    // for(int i=0;i<n;i++){
    //     if(i!=arr[i])cout<<i;
    //     break;
    // }
    int lo=0;
    int hi=n-1;
    int ans=-1;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid)lo=mid+1;//peeche toh ho he nhi skta number aage he hoga pakka 
        else{
            ans=mid;
            hi=mid-1;
        }
    }
    cout<<ans;
}
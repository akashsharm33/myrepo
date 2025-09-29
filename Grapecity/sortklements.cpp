#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,k;
    cout<<"enter the size of the array";
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the number of elements we need to sort";
    cin>>k;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr.begin(),arr.begin()+k);
    sort(arr.begin()+k,arr.end(),greater<int>());//greater int function used for sorting in reverse;

    for(int x:arr)cout<<x<<" ";
}

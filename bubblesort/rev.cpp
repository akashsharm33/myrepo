#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int n;
cout<<"enter number of elements you want to have in your array";
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
for(int i=0;i<n;i++){
    bool flag=true;
    for(int j=0;j<n-1-i;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    if(flag==true){
        break;
    }

}
    
    for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
}
#include<iostream>
#include<algorithm>
using namespace std;
bool contain_dupli(int arr[],int n){
 sort(arr,arr+n);
 for(int i=0;i<n-1;i++){
    if(arr[i]==arr[i+1]){
        return true;
    }
 }
 return false;
}

int main(){
    int n;
    cout<<"enter the size of the array plzz";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    contain_dupli(arr,n);
    if(contain_dupli(arr,n)==true){
        cout<<"it contain duplicate elements";
    }
    else{
        cout<<"it does not contain the duplicate element here sorry for that";
    }

}
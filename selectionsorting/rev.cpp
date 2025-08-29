#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the number ";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                flag=false;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag==true)cout<<"swap does not happen";
    }
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
    }
    

}
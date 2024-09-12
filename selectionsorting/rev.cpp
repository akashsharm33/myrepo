#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of elements you want";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0;i<n-1;i++ ){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                mindx=j;
            }
        }
    
        swap(arr[i],arr[mindx]);
    }
        for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
        
    
}
#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,99,4,5};
    int n=5;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
  for(int i=1;i<n;i++){
    int j=i;
    while(j>=1){
        if(arr[j]>=arr[j-1])break;
        else
            swap(arr[j],arr[j-1]);
            j--;
        
    }
  }
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
   
}
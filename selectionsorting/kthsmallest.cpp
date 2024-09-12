#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={22,3,4,5,66};
    int n=5;
    int k=3;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    //selection sort upto kth element or upto k passes ;
    for(int i=0;i<k;i++){
        int min=arr[i];
        int mindx=i;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                mindx=j;
                
            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
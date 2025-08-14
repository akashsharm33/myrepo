#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
  int arr[5]={11,2,3,4,6};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<5;i++){
        int min=INT_MAX;
        int mindx=-1;
        for(int j=i;j<5;j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    cout<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
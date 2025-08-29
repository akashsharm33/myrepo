#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[6]={5, 4, 6, 3, 2, 1};
    int n=6;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int brr[5];
    for(int i=0;i<n;i++){//5 4 6 3 2 1 
        arr[i]=brr[i];
    }
    for(int i=0;i<n-1;i++){
        bool flag=true;//already sorted there 
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }


        }
        if(flag==true){//swap didnt happen;
            break;
        }
        
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //brr=5 4 6 3 2 1
    //arr=1 2 3 4 5 6
    bool flag=true;//means it is alomost sorted;
    for(int i=0;i<n;i++){
        if(i==0){
            if(brr[i]!=arr[i]&&brr[i]!=arr[i+1]){
                flag=false;
                break;
            }
        }
        else if(i==n-1){
            if(brr[i]!=arr[i]&&brr[i]!=arr[i-1]){
                flag=false;
                break;
            }
        }
        else{
            if(brr[i]!=arr[i]&&brr[i]!=arr[i+1]&&brr[i]!=arr[i-1]){
                flag=false;
                break;
            }
        }
    }
    cout<<endl;
    cout<<flag;

}
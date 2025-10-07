#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int max=INT_MIN;
    for(int i=0;i<5;i++){
        if(max<arr[i])max=arr[i];
    }
    cout<<max<<endl;
    int smax=INT_MIN;
    for(int i=0;i<5;i++){
        if(max!=arr[i]&&smax<arr[i])smax=arr[i];
    }
    cout<<smax<<endl;
    int tmax=INT_MIN;
    for(int i=0;i<5;i++){
        if(max!=arr[i]&&smax!=arr[i]&&tmax<arr[i])tmax=arr[i];
    }
    cout<<tmax;
}
#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    if(sr>er||sc>ec)return 0;
    if(sr==er&&sc==ec)return 1;
    int rightways=maze(sr,sc+1,er,ec);
    int downways=maze(sr+1,sc,er,ec);
    return rightways+downways;
    
}
void printpath(int sr,int sc,int er,int ec,string s){
    if(sr>er||sc>ec)return;
    if(sr==er&&sc==ec){
        cout<<s<<" "<<endl;
    }
    printpath(sr,sc+1,er,ec,s+'R');
    printpath(sr+1,sc,er,ec,s+'D');
}
int main(){
    //cout<<maze(1,1,3,3);
    printpath(1,1,3,3,"");
}
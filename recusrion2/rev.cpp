#include<iostream>
using namespace std;
int mazepath(int sr,int sc,int er,int ec){
    if(sr>er||sc>ec){
        return 0;

    }
    if(sr==er&&sc==ec){
        return 1;
    }
    int rightways=mazepath(sr,sc+1,er,ec);
    int downways=mazepath(sr+1,sc,er,ec);
    return rightways+downways;
}
void print_path(int sr,int sc,int er,int ec,string s){
    if(sr>er||sc>ec){
        return ;
    }
    if(sr==er&&sc==ec){
        cout<<s<<endl;
        return;
    }
    print_path(sr,sc+1,er,ec,s+'R');
    print_path(sr+1,sc,er,ec,s+'D');
}
int main(){
    cout<<mazepath(1,1,3,3);
    print_path(1,1,3,3,"");
}
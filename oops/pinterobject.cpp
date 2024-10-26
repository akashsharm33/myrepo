#include<iostream>
using namespace std;
class cricketer{
    public:
    string name;
    int runs;
    cricketer(string name,int runs){
        //constructor variable name same hoga or declared variable name same hoga tb this use hoga
        this->name=name;
        this->runs=runs;
    }
    void print(){
    cout<<name<<" "<<runs<<endl;
}
};
void change(cricketer*c){
    // (*c).runs=10000;
    c->runs=88;
}
int main(){
 cricketer c1("virat kohli",25000);
 cricketer c2("Rohit sharm",18000);
 cout<<c1.runs<<endl;
 change(&c1);
 cout<<c1.runs;
//  cricketer*p1=&c1;
 //cout<<(*p1).runs<<endl;//xc1.runs
 


}
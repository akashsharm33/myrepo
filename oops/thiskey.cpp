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

int main(){
cricketer c1("virat kohli",25000);
cricketer c2("Rohit sharm",18000);
// cout<<c1.name<<" "<<c1.runs<<endl;
// cout<<c2.name<<" "<<c2.runs<<endl;
c1.print();
c2.print();

}
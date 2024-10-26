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

};

int main(){
 cricketer c1("virat kohli",25000);
 cricketer *c2=new cricketer("Rohit sharma",18000);//pointer objevt it is 
 //dynamic allocation 
cout<<c2->name<<" "<<c2->runs<<endl;
}

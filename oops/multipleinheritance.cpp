#include<iostream>
using namespace std;
class Cricketer{
public:
int runs;
int wickets;
int avg;

};
class Engineer{
    public:
    int experience;
    string domain;
};
class Phodu:public Engineer,Cricketer{//multiple inheritance
    public:
    string name;

}
int main(){

}
#include<iostream>
using namespace std;
class Car{
    public:
    string name;
int price;
int seats;
string type;
};
void print(Car c){
    cout<<c.name<<" "<<c.type<<" "<<c.price<<endl;
}
void change(Car& c){
  c.name="audi 8";
}
int main(){
    Car c1;
    c1.name="honda city";
    c1.price=150000;
    c1.type="sedan";
    Car c2;
    c2.name="fortuner";
    c2.price=390000;
    c2.type="SUV";
    
    print(c1);
    change(c1);//pass by value ho rha hai;
    print(c1);
}
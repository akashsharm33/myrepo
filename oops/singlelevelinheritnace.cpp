#include<iostream>
using namespace std;
class Scooty{//parent class
public:
int topspeed;
float mileage;
private:
int bootspace;
};
class Bike:public Scooty{//child class /derived class
 public:
 int gears;
};
int main(){
    Bike b1;
    b1.topspeed=99;
    b1.mileage=12.5;
    b1.gears=6;
  
}

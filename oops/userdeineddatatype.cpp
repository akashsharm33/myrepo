#include<iostream>
using namespace std;
class Student{//student is a new data type here 
public:
string name;
int rno;
float gpa;
};
class Car{//student is a new data type here 
public:
string name;
int price;
int seats;
string type;
};
int main(){
    Student s1;
    //attributes;
    s1.name="akash sharma";
    s1.rno=36;
    s1.gpa=8.2;
    Student s2;
    s2.name="himashu";
    s2.rno=36;
    s2.gpa=8.4;
    cout<<s1.name<<""<<s1.gpa<<endl;
     cout<<s2.name<<""<<s2.gpa<<endl;
}
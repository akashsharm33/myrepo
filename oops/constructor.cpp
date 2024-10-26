#include<iostream>
using namespace std;
class Student{//student is a new data type here 
public:
string name;
int rno;
float gpa;
Student(){//default constructor 

}
Student(string s,int r,float g){//parameterised constructor it is 
    name=s;
    rno=r;
    gpa=g;
}
Student(int r){
    rno=r;

}
};
class Car{//student is a new data type here 
public:
string name;
int price;
int seats;
string type;
};
int main(){
    Student s1("akash sharma",36,8.1);//pass value in order
    //attributes;
    // s1.name="akash sharma";
    // s1.rno=36;
    // s1.gpa=8.2;
    Student s2;
    s2.name="himashu";
    s2.rno=36;
    s2.gpa=8.4;
    Student s3(88);
    Student s6=s1;//deep copy
    s6.name="manish";
    Student s7(s1);//copy constructor;
   
    cout<<s1.name<<" "<<s1.gpa<<" "<<s1.rno<<" "<<endl;
//     cout<<s2.name<<""<<s2.gpa<<endl;
//     cout<<s3.rno<<endl;
//     cout<<s6.name<<" "<<s6.gpa<<" "<<s6.rno<<" "<<endl;
//      cout<<s7.name<<" "<<s7.gpa<<" "<<s7.rno<<" "<<endl;

 }
#include<iostream>
using namespace std;
class Student{
public:
    int rno;
    string name;

 
    Student(){

    }
    Student(int rno,string name,float marks){
        this->rno=rno;
        this->name=name;
        this->marks=marks;
    }
       float getmarks(){
        return marks;
    }
    void setmarks(float m){
        marks=m;
    }
private:
    float marks;
};
int main(){
    Student s1(44,"Ak",77.9);
    //s1.marks=77;//error because it is private member;
    cout<<s1.getmarks()<<endl;
    s1.setmarks(77.99);
    
}
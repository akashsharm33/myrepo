#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int rno;
    Student(){

    }
    Student(string n,int a,int r ){
        name=n;
        age=a;
        rno=r;
    }
};
void print(Student s){
    cout<<s.name<<" "<<s.age<<" "<<s.rno<<endl;
}
void change(Student&c){
    c.name="Ayush";
}
int main(){
    Student s1("Akash sharma",21,51);
    Student s2("Aman sharma",20,36);
    Student s7(s2);

    
   
     print(s1);
     print(s2);
     print(s7);
    //  cout<<s2.name<<" "<<s2.rno<<" "<<s2.age<<endl;
    

}
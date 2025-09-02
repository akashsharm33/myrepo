#include <iostream>
#include <fstream>
#include <windows.h>
#include <sstream>
using namespace std;

class Student{
private:
string Name, RollNo;
float CGPA;

public:
Student():Name(""), RollNo(""),CGPA(0.0){}

void setName(string name){
	Name = name;
}

void setRollNo(string rollNo) { 
 RollNo = rollNo;
}

void setCGPA(float cgpa) { 
 CGPA = cgpa;
}

string getName(){
	return Name;
}


string getRollNo() {
 return RollNo;
}

float getCGPA() {
 return CGPA;
}

};

void addStudent(Student s){
string name, rollNo;
float cgpa;

cout<<"Enter Name Of Student: ";
cin>>name;
s.setName(name);

cout << "Enter RollNo of Student: ";
cin >> rollNo;
s.setRollNo(rollNo);

cout << "Enter CGPA of Student: ";
cin >> cgpa;
s.setCGPA(cgpa);

ofstream out("D:/Student.txt", ios::app);
if(!out){
	cout<<"ERROR: File Not Opened!"<<endl;
}
else{
out<<s.getName()<<" : "<<s.getRollNo()<<" : "<<s.getCGPA()<<endl;
cout<<"Student Added Successfuly!"<<endl;
}
out.close();
}

void search(Student s){
string name;
cout<<"Enter Name of Student: ";
cin>>name;

ifstream in("D:/Student.txt");
if(!in){
cout<<"Error: File Can Not Open!"<<endl;
}
else{
string line;
bool found = false;
while(getline(in,line)){
int pos = line.find(name);
if(pos != string::npos){
 cout << " Name | RollNo | CGPA" << endl;
 cout << line << endl;
 found = true;
}
}
if(!found){
	cout<<"Student Not Found!"<<endl;
}
}
}

void update(){
	string rollNo;
cout<<"Enter RollNo of Student: ";
cin>>rollNo;

ifstream in(
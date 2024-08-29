#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str="akash is a good boy";
    stringstream ss(str);
    string temp;
    while(ss>>temp){//ss me se input leloo;
        cout<<temp<<endl;
    }
}
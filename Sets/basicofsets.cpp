#include<iostream>
#include<unordered_set>
using namespace std;
int main(){
    unordered_set<int>s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.erase(2);
    // using for each loop;
    // for ele in the set;
    for(int ele:s){
        cout<<ele<<" ";
    }
    //s.find() it will searches in the set
    // and if not found it will return the last element;
    int target=4;
    if(s.find(target)!=s.end()){//target exists
     cout<<"exists"<<endl;
    }
    else cout<<"not exists";
    cout<<s.size()<<endl;
}
#include<bits/stdc++.h>
using namespace std;
class student{
    private:
string name;
int age;
int id;
public:
 student(string name,int age,int id){
     cout<<"parametrised construcor is called"<<endl;
    this->name=name;
    this->age=age;
    this->id=id;
}
 student(){
     cout<<"default constructor called"<<endl;
    // cout<<name<<endl;
    // cout<<age<<endl;
    // cout<<id<<e
}
student(student &s){
    cout<<"copy costructor is called"<<endl;
}

};


int main(){
    student s("aniket",24,1);
    student b;
    student c;
    c=s;
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
class student{
    private:
string name;
int age;
int id;
public:
void set_data(string,int,int);
void get_data();

};
void student ::set_data(string name,int age,int id){
    this->name=name;
    this->age=age;
    this->id=id;
}
void student ::get_data(){
    cout<<name<<endl;
    cout<<age<<endl;
    cout<<id<<endl;
}
int main(){
    student s[3];
    string str;
    int age;
    int id;
    cout<<"enter the details of objects"<<endl;
    for(int i=0;i<3;i++){
       
        cin>>str;
        
        cin>>age;
        
        cin>>id;
        s[i].set_data(str,age,id);
    
    }
    cout<<"details of objects are given below"<<endl;

    for(int i=0;i<3;i++){

        cout<<"dtails of object"<<i+1<<":-"<<endl;
        s[i].get_data();
    }
    return 0;
}
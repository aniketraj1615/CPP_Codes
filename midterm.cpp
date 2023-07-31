/*
inheritance is capability of a class to derive the properties and characterstics from another class.
types of inheritance:
1.single inheritance   
   a--->b
2.multiple inheritance   
*/
#include<iostream>
using namespace std;
class a{

public:
    string name;
int a;


};
class b{
public :
int roll;
int b;
};
class c:public a,public b{
public :
int age;
int c;
void display(){
    cout<<name<<endl;
    cout<<roll<<endl;
    cout<<age;
}
};
int main(){
c obj;
obj.name="aiket";
obj.roll=10;
obj.age=22;
obj.display();
   return 0; 
}
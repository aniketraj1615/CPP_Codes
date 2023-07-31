/*
inheritance is capability of a class to derive the properties and characterstics from another class.
types of inheritance:
1.single inheritance   
   a--->b
2.multiple inheritance   
*/
#include<iostream>
using namespace std;
class area{

public:

   
   void areaa(int a,int b){
cout<< (a*b)<<endl;
    }
void areaa(int r){
    cout<<(2*3.14*r)<<endl;
}


};
// class b{
// public :
// int roll;
// int b;
// };
// class c:public a,public b{
// public :
// int age;
// int c;
// void display(){
//     cout<<name<<endl;
//     cout<<roll<<endl;
//     cout<<age;
// }
// };
int main(){
area obj;

obj.areaa(7);
obj.areaa(12,10);
   return 0; 
}
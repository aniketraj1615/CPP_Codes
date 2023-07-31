#include<bits/stdc++.h>
using namespace std;


class complex1{
    private:
    int real1;
    int imag1;
    public:
    void setdata1(int real,int imag){
real1=real;
imag1=imag;
    }
     void display(){
         
         cout<<"conjugate of given number is"<<endl;
         cout<<real1<<"+"<<"i"<<imag1<<endl;
         if(imag1>=0){
         
         cout<<real1<<"-"<<"i"<<imag1<<endl;}
         else{
                  cout<<real1<<"+"<<"i"<<(-1*imag1)<<endl;}
         
     }
};

int main(){
complex1 c1;
c1.setdata1(-10,-3);
c1.display();
return 0;
}
#include<bits/stdc++.h>
using namespace std;

class complex2;
void fun();
class complex1{
    private:
    int real1;
    int imag1;
    public:
    void setdata1(int real,int imag){
real1=real;
imag1=imag;
    }
    friend void fun(complex1,complex2);
};
class complex2{
     private:
    int real2;
    int imag2;
    public:
    void setdata2(int real,int imag){
real2=real;
imag2=imag;
    }
    friend void fun(complex1,complex2);
};
void fun(complex1 c1,complex2 c2){
    int real=c1.real1+c2.real2;
    int imag=c1.imag1+c2.imag2;
    cout<<real<<" + "<<"i"<<imag;
}
int main(){
complex1 c1;
c1.setdata1(10,3);
complex2 c2;
c2.setdata2(2,10);
fun(c1,c2);
return 0;
}
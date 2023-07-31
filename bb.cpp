#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int imag;
    public:
    complex();
    complex(int a,int b){
        real=a;
        imag=b;
    }
    void get_data(){
      cout<<real<<"+ "<<"i"<<imag<<endl;
    }
    complex operator +(complex const &obj){
    complex c1;
    c1.real=real+obj.real;
    c1.imag=imag+obj.imag;
    return c1;
}
};

int main(){
    complex a(12,10),b(13,15);
    complex c=a+b;

c.get_data();

return 0;
}
#include <bits/stdc++.h>
using namespace std;
class complexx
{
private:
    int real;
    int imag;

public:
complexx(int r,int i)
    {
      real=r;
      imag=i;  
    }
    
    void get_data()
    {
        cout << real << "+" << imag << "i" << endl;
    }
    complexx()
    {
        
    }
    complexx operator+(complexx const &c)
    {
        complexx temp;
        temp.real = real + c.real;
        temp.imag = imag + c.imag;
        return temp;
    }
};
int main()
{
    complexx c1(10,3),c2(10,3);
    complexx c3=c2+c1;
    c3.get_data();
    
    
    return 0;
}
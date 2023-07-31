#include <bits/stdc++.h>
using namespace std;

class Complex
{
  int real;
  int imag;

public:
  void setData(int r, int i)
  {
    real = r;
    imag = i;
  }
  void getData()
  {
    cout << real << "+i" << imag << endl;
  }
  Complex operator+(Complex c)
  {
    Complex res;
    res.real = real + c.real;
    res.imag = imag + c.imag;
    return res;
  }
};

int main()
{
  Complex x, y, z;
  x.setData(3, 4);
  y.setData(5, 6);
  z = x + y;
  z.getData();
  return 0;
}
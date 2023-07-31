#include<bits/stdc++.h>
using namespace std;
class complexx{
   private:
   int real;
   int imag;
   public:
complexx(){
   real=0;
   imag=0;
}
complexx(int r,int i){
   real=r;
   imag=i;
}
complexx operator +(complexx c){
   complexx temp;
   temp.real=real+c.real;
   temp.imag=imag+c.imag;
   return temp;
}
void display(){
   cout<<real<<" + "<<imag<<"i"<<endl;
}
};
int main(){
complexx c1(12,13);
complexx c2(1,2);
complexx c3(10,10);
complexx c4;
c4=c1+c2+c3;
c4.display();
int x=4;
int y=5;
int z=x+y;
cout<<z<<endl;
return 0;
}
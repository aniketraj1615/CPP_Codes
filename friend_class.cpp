#include<bits/stdc++.h>
using namespace std;
class complexx;
class calculator{
public:
int add(int a,int b){
    return a+b;
}
int sumREAL(complexx,complexx);

};
class complexx{
    int a;
    int b;
    friend int calculator::sumREAL(complexx,complexx);
    public:
    void setdata(int a ,int b);
    void getdata();
};
void complexx::setdata(int a,int b){
    this->a=a;
    this->b=b;
}
void complexx::getdata(){
   cout<<a<<"+"<<b<<"i"<<endl;
}
int calculator::sumREAL(complexx o1,complexx o2){
   return o1.a+o2.a;
}
int main(){
complexx o1,o2;
o1.setdata(12,13);
o1.getdata();
o2.setdata(1,2);
o2.getdata();
calculator cal;
cout<<cal.sumREAL(o1,o2);


return 0;
}
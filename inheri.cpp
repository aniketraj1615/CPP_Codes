#include<bits/stdc++.h>
using namespace std;
class base{
    int data1;
    public:
    int data2;
    void setdata(int a);
    int getdata1();
    int getdata2();
};
void base::setdata(int a){
    data1=a;
    data2=20;
}
int base::getdata1(){
    return data1;
}
int base::getdata2(){
    return data2;
}
class derived:public base{
    int data3;
    public:
    void process();
    void display();

};
void derived:: process(){
    data3=data2*getdata1();
}
void derived:: display(){
    cout<<"data1 is  "<<getdata1()<<endl;
    cout<<"data2 is  "<<data2<<endl;
    cout<<"data3 is  "<<data3<<endl;
}
int main(){
derived der;
der.setdata(10);
der.process();
der.display();
return 0;
}
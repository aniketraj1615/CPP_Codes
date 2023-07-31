#include<bits/stdc++.h>
using namespace std;
class y;
class x{
    int a;
    public:
    friend void add(x,y);
    void setdata1(int a){
        this->a=a;
    }
    void display(){
        cout<<a<<endl;
    }
};
class y{
    int b;
    public:
     friend void add(x,y);
    void setdata2(int b){
        this->b=b;
    }
    void display(){
        cout<<b<<endl;
    }
};
void add(x o1,y o2){
    cout<<"friend function is called"<<endl;
    cout<<o1.a+o2.b<<endl;
}
int main(){
x a;
y b;
a.setdata1(100);
b.setdata2(1000);
add(a,b);
return 0;
}
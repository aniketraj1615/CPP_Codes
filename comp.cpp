#include<bits/stdc++.h>
using namespace std;
class complexx{
    int a;
    int b;
    public:
    void setdata(int v1,int v2);
    void getdata();
    void add(complexx o1,complexx o2);

};
void complexx::setdata(int v1 ,int v2){
a=v1;
b=v2;
}
void complexx::getdata(){
cout<<a<<"+i"<<b<<endl;
}
void complexx::add(complexx o1,complexx o2){
a=o1.a+o2.a;
b=o1.b+o2.b;
}

int main(){
complexx c1,c2,c3;
c1.setdata(1,2);
c1.getdata();
c2.setdata(3,4);
c2.getdata();
c3.add(c1,c2);
c3.getdata();

return 0;
}
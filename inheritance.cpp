#include<bits/stdc++.h>
using namespace std;
class a{
private:
int x;
protected:
int k;
public:
int y;
void set_y(int d,int x){
    y=d;
    this->x=x;
    
    cout<<y<<endl;
}
void get_data_a(){
    cout<<"function of class a"<<endl;
    cout<<x<<endl;
}
};
/* class b can be derived in public mood,private mood and protected mood
private mem.. of the base class are always not inheritaed independent of method of derivation
proteded will become private member of derived class in case of private derivtion

*/
class b:public a{
private:
int p;
protected:
int q;
public:
int r;
void get1_data_b(){
    cout<<"function of class b"<<endl;
     cout<<"function of class a"<<endl;
     cout<<y<<endl;
}
};
int main(){
    b s;
    // s.set_data_a();
    // s.set_data_b();
    s.set_y(20,3);
    // s.y=100;
    // cout<<s.y<<endl;
    // s.x=100;
    // cout<<s.x<<endl;
    s.get_data_a();
    
    return 0;
}
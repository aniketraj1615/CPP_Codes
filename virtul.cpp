#include<iostream>
using namespace std;
class a{
    public:
    virtual void display(){
        cout<<"base class function"<<endl;
    }
};
class b:public a{
    public:
 void display(){
    cout<<"hurryyyyyyyyyyyyy"<<endl;
        cout<<"derived class function"<<endl;
    }
};
int main(){
    class a *ptr;
    class b obj;
    ptr=&obj;
    ptr->display();

    return 0;
}

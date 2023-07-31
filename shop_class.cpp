#include<bits/stdc++.h>
using namespace std;
class shop{
    private:
    int id;
    double price;
    public:
    void set_data(int a,double b){
    id=a;
    price=b;
    }
    void get_data(){
        cout<<"product id is"<<id<<endl;
        cout<<"product price is"<<price<<endl;
    }
};
int main(){
    int size;
    cin>>size;
shop *ptr=new shop[size];
shop *ptrTemp=ptr;
for(int i=0;i<size;i++){
    int p;
    double d;
    cin>>p>>d;
    ptr->set_data(p,d);
    ptr++;
}
for(int i=0;i<size;i++){
    ptrTemp->get_data();
    ptrTemp++;
}
    return 0;
}
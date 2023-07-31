#include<bits/stdc++.h>
using namespace std;
class ractangle{
    private:
    int length;
    int breadth;
public:
void set_data(int l,int b){
length=l;
breadth=b;
}
int area( ){
    return length*breadth;
}
int perimeter( ){
    return 2*(length+breadth);
}
int change_len( int l){
   //(*r).length=l;
   length=l;
   return length;

}
void disp_len(){
    cout<<length<<endl;
}
};
int main(){
 ractangle r;
r.set_data(12,12);

cout<<"area of the ractangle"<<r.area()<<endl;
cout<<"perimeter of the ractangle"<<r.perimeter()<<endl;
int l=1200;
cout<<"changing the length of ractangle"<<r.change_len(l)<<endl;
//cout<<<<endl;
return 0;
}
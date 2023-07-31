#include<bits/stdc++.h>
using namespace std;
struct ractangle{
    int length;
    int breadth;
};
int area(struct ractangle r){
    return r.length*r.breadth;
}
int perimeter(struct ractangle r){
    return 2*(r.length+r.breadth);
}
int change_len(struct ractangle *r,int l){
   //(*r).length=l;
   r->length=l;
   return r->length;
}
int main(){
struct ractangle r;
r.length=12;
r.breadth=12;

cout<<"area of the ractangle"<<area(r)<<endl;
cout<<"perimeter of the ractangle"<<perimeter(r)<<endl;
int l=1200;
cout<<"changing the length of ractangle"<<change_len(&r,l)<<endl;
cout<<r.length<<endl;
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int area(int l,int b){
    return l*b;
}
int perimeter(int l,int b){
    return 2*(l+b);
}
int change_len(int *len,int l){
   *len=l;
   return *len;
}
int main(){
int length;
int breadth;
cin>>length>>breadth;

cout<<"area of the ractangle"<<area(length,breadth)<<endl;
cout<<"perimeter of the ractangle"<<perimeter(length,breadth)<<endl;
int l=1200;
cout<<"changing the length of ractangle"<<change_len(&length,l)<<endl;
cout<<length<<endl;
return 0;
}
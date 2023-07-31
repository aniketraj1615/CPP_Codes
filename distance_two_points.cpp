#include<bits/stdc++.h>
using namespace std;
class point;
double dis(point,point);

class point{
    int x;
    int y;
    public:
    friend double dis(point ,point );
    point(int a,int b){
        x=a;
        y=b;
    }
    void display(){
        cout<<x<<"  "<<y<<endl;
    }

};
double dis(point p1,point p2){
int a,b;
a=pow((p1.x-p2.x),2);
b=pow((p1.y-p2.y),2);
return(sqrt(a+b));
}
int main(){
class point p1(3,5);
p1.display();
class point p2(1,3);
p2.display();
cout<<dis(p1,p2);
return 0;
}
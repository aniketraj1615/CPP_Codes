#include<bits/stdc++.h>
using namespace std;
template<class T>
class maxx{
    public:
    T n;
    maxx();
    maxx(T k){
n=k;

    }
T fun(maxx &obj ,maxx &obj1){
    if(n>obj.n){
        if(n>obj1.n){
        return n;
        }
        else{
            return obj1.n;
        }
    }
    else{
        if(obj.n>obj1.n){
            return obj.n;
        }
        else{
            return obj1.n;
        }
    }
}

};
int main(){
maxx<char>a('A'),b('C'),c('Z');
char d=a.fun(b,c);
cout<<d<<endl;
maxx<float>aa(1.23),ab(2.3),ac(0.3);
float e=aa.fun(ab,ac);
cout<<e<<endl;
return 0;
}
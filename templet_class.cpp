#include<bits/stdc++.h>
using namespace std;
template<class t>
class product{
    public:
    t *arr;
    int size;
    product(int n){
        size=n;
        arr=new t [size];
    }
    t dot_product(product &p){
        t d=0;
        for(int i=0;i<size;i++){
            d+=this->arr[i]*p.arr[i];

        }
        return d;
    }
    
};
int main(){
product<float> a(2);
a.arr[0]=1.1;
a.arr[1]=2.0;
product<float> b(2);
b.arr[0]=1.1;
b.arr[1]=2.0;
float g=a.dot_product(b);
cout<<g<<endl;

    return 0;
}
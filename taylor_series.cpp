#include<bits/stdc++.h>
using namespace std;
double static p=1,f=1;
double r;
double e(int x,int n){
    if(n==0){
        return 1;
    }
   
r=e(x,n-1);
p=p*x;
f=f*n;

    return r+(p/f);
}
int main(){
int x,n;
cin>>x>>n;
cout<<e(x,n);
return 0;
}
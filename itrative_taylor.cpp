#include<bits/stdc++.h>
using namespace std;
double e(int x,int n){
    double s=1;
    double num=1;
    double den=1;
    for(int i=1;i<=n;i++){
        num=num*x;
        den=den*i;
        s=s+num/den;
    }
    return s;
}
int main(){
int x,n;
cin>>x>>n;
cout<<e(x,n);
return 0;
}
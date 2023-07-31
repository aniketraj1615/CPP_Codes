#include<bits/stdc++.h>
using namespace std;
int fun(int n){
    if(n%2!=0&&n<=10){
        return n-1;
       return fun(n-1);
    }
    else if(n%2==0&&n<=10){
return n-1;
return fun(n-1);
    }
}
int main(){
int n;
cin>>n;
cout<<fun(n)<<" ";
return 0;
}
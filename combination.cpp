#include<bits/stdc++.h>
using namespace std;
int c(int n,int r){
    if(n==r||r==0){
        return 1;
    }
    return c(n-1,r)+c(n-1,r-1);
}
int main(){
int n;
int r;
cin>>n>>r;
cout<<c(n,r)<<endl;

return 0;
}
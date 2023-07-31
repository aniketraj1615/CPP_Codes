#include<bits/stdc++.h>
using namespace std;
class bce{
public:
int n;


void sum(){
    int sum=0;
    while(n!=0){
        
        sum=sum+n%10;
        n=n/10;
    }
    cout<<sum<<endl;
}

};
int main(){
bce b;
b.n=123;
b.sum();
return 0;
}
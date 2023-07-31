#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter the number"<<endl;
int n;
cin>>n;
int digit=log10(n)+1;
int copy=n;
int sum=0;
while(n!=0){
sum=sum+pow(n%10,digit);
n=n/10;
}
if(sum==copy){
    cout<<copy<<" is a armstronge number"<<endl;
}
else{
    cout<<copy<<" is a not armstronge number"<<endl;
}
return 0;
}
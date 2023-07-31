#include<bits/stdc++.h>
using namespace std;
int arr[10]={0};
int fibb(int n){
if(n<=1){
    arr[n]=n;
    return n;
}
else{
    if(arr[n-1]==0){
        arr[n-1]=fibb(n-1);
    }
    if(arr[n-2]==0){
        arr[n-2]==fibb(n-2);
    }
    return fibb(n-1)+fibb(n-2);
}
}

int main(){
int n;
cin>>n;
cout<<fibb(n)<<endl;
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"enter sum"<<endl;
int sum;
cin>>sum;

int mx=arr[0];
int min=arr[0];
for(int i=0;i<n;i++){
if(arr[i]>mx){
    mx=arr[i];
}
if(arr[i]<min){
    min=arr[i];
}
}
cout<<mx<<min<<endl;
return 0;
}
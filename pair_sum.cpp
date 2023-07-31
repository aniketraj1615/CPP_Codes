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

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
    if(j>i&&arr[i]+arr[j]==sum){
cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
    }
}
}
return 0;
}
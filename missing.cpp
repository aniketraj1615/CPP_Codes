#include<bits/stdc++.h>
using namespace std;
void missing(int arr[],int l,int r){
    int index;
    for(int i=l;i<r;i++){
        
        if(arr[i]-i!=arr[0]){
cout<<arr[i-1]+1<<endl;
break;
//missing(arr,i,r);
        }
    }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
cin>>arr[i];
}
missing(arr,0,n);
return 0;
}
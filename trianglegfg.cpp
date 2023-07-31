#include<bits/stdc++.h>
using namespace std;
void triangle(int arr[],int n){
//int static k=0;
if(n<1){
    return ;
}
     int temp[n-1];
    for(int i=0;i<n;i++){
    temp[i]=arr[i+1]+arr[i];
    }
    

    triangle(temp,n-1);
   
for(int i=0;i<n;i++){
    if(i<=n-2){
        cout<<arr[i]<<",";
    }
    else{
        cout<<arr[i];
    }
}
cout<<endl;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
triangle(arr,n);
return 0;
}
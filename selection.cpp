#include<bits/stdc++.h>
#include<time.h>
#include<sum.h>
using namespace std;
void selection(int arr[],int n){
    int min_index;
    for(int i=0;i<n-1;i++){
min_index=i;
for(int j=i+1;j<n;j++){
    if(arr[j]<arr[min_index]){
        min_index=j;
    }
}
if(min_index!=i){
    int t=arr[min_index];
    arr[min_index]=arr[i];
    arr[i]=t;

}
    }
}
int main(){
// int n;
// cin>>n;
// int arr[n];
// for(int i=0;i<n;i++){
//     arr[i]=rand()%100;
// }
// time_t t1;
// t1=clock();
// selection(arr,n);
// time_t t2;
// t2=clock();
// double t=double(t2-t1)/CLOCKS_PER_SEC;
// cout<<"time"<<endl;
// for(int i=0;i<n;i++){
//     cout<<arr[i]<<" ";
// }
// cout<<endl;
// cout<<t<<endl;
// return 0;
int a=10;int b=5;
cout<<sum(a,b)<<endl;
}
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int arr1[],int n1,int arr2[],int n2 ){
int i=0,j=0,k=0;

while(i<n1&&j<n2){
if(arr1[i]<=arr2[j]){
    arr[k]=arr1[i];
    i++;
    k++;
}
else if(arr2[j]<=arr1[i]){
    arr[k]=arr2[j];
    j++;
    k++;
}
}
while(i<n1){
    arr[k]=arr1[i];
    i++;
    k++;
}
while(j<n2){
    arr[k]=arr2[j];
    j++;
    k++;
}
}
int main(){
int n1,n2;
cin>>n1>>n2;
int arr1[n1];
int arr2[n2];
for(int i=0;i<n1;i++){
    cin>>arr1[i];
}
for(int i=0;i<n2;i++){
    cin>>arr2[i];
}
int arr[n1+n2];
merge(arr,arr1,n1,arr2,n2);
for(int i=0;i<n1+n2;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
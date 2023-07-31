#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int si,int ei){
int i=si;
int j=ei;
int pivot=arr[si];
while(i<j){
    while(arr[i]<=pivot){
        i++;
    }
    while(arr[j]>pivot){
        j--;
    }
    if(i<j){
swap(arr[i],arr[j]);
    }
    else{
        swap(arr[j],arr[si]);
    }
}
return j;
}
void quick_sort(int arr[],int si,int ei){
   if(si<ei){ int pi=partition(arr,si,ei);
    quick_sort(arr,si,pi-1);
    quick_sort(arr,pi+1,ei);
}}
int main(){
int arr[]={12,-1200,0,900,-243};
quick_sort(arr,0,4);
for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
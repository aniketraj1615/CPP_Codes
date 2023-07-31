#include<bits/stdc++.h>
using namespace std;
stack<int>s1,s2;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int partition(int arr[],int si,int ei){
    int pivot=arr[si];
    int i=si;
    int j=ei;
    while(i<j){
        while(arr[i]<=pivot){
            i++;
        }
        while(arr[j]>pivot){
            j++;
        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
        else{
            swap(arr[j],arr[si]);
        }
        return j;
    }
}
void quick_sort(int arr[],int si,int ei){
    if(si<ei){
        s1.push(si);
        s2.push(partition(arr,si,ei)-1);
        s1.push(partition(arr,si,ei)+1);
        s2.push(ei);
    }
    else{
        int a=s1.top();
        int b=s2.top();
        quick_sort(arr,a,b);
        s1.pop();
        s2.pop();
    }
}
int main(){
int arrr[]={123,-1,0,1231,-1000,45,87,34};
quick_sort(arrr,0,7);
while(!s1.empty()){
s1.pop();
}
for(int i=0;i<8;i++){
    cout<<arrr[i]<<" ";
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int insert(int arr[],int n,int key,int capacity,int loc){
    if(n>=capacity){
        return n;
    }
    for(int i=n;i>loc;i--){
        arr[i]=arr[i-1];
    }
    arr[loc]=key;
    return n+1;
}
int main(){
    cout<<"Enter the capacity of array"<<endl;
int capacity;
cin>>capacity;
int arr[capacity];
cout<<"Enter the number of elements in the  array"<<endl;
int n;
cin>>n;
cout<<"Enter the key to be inserted"<<endl;
int key;
cin>>key;

int loc;
cout<<"Enter the location where to insert the key"<<endl;
cin>>loc;
cout<<"Enter the elements of array"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<"Before insertion array is :"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}

n=insert(arr,n,key,capacity,loc);
cout<<"After insertion array is :"<<endl;
for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
}
return 0;
}
#include<bits/stdc++.h>
using namespace std;
int index(int arr[],int n,int key){
    int index=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            index =i;
        }
    }
    return index;

}
int fun(int arr[],int n,int key){
    int j=index(arr,n,key);
    if(j==-1){
        cout<<"Element not found"<<endl;
        return n;
    }
    for(int i=j;i<n-1;i++){
        arr[i]=arr[i+1];
        
    }
   return n-1;
    

}
int main(){
    cout<<"Enter the capacity of array"<<endl;
int capacity;
cin>>capacity;
int arr[capacity];
cout<<"Enter the number of elements in the  array"<<endl;
int n;
cin>>n;
cout<<"Enter the key to be deleted"<<endl;
int key;
cin>>key;
cout<<"Enter the elements of array"<<endl;
for(int i=0;i<n;i++){
    cin>>arr[i];
}

cout<<"Before deletion array is :"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
cout<<endl;
n=fun(arr,n,key);
cout<<"After deletion array is :"<<endl;
for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
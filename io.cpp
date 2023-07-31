#include<bits/stdc++.h>
using namespace std;
// 
void insert(int arr[],int n,int l,int index,int key){
    if(n>l){
        for(int i=n-1;i>=index;i--){
arr[i+1]=arr[i];
        }
        arr[index]=key;
    }
    else{
        cout<<"insert can't be done in this case"<<endl;
    }
}
int main(){
int n;
cout<<"enter size of array"<<endl;
cin>>n;
int l;
cout<<"enter number of elements in array"<<endl;
cin>>l;
int key;
cout<<"enter key"<<endl;
cin>>key;
int arr[n];
for(int i=0;i<l;i++){
    cin>>arr[i];
}

//append(arr,n,l,key);
insert(arr,n,l,2,key);
cout<<"aniket"<<endl;
for(int i=0;i<l+1;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
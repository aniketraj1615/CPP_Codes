#include<bits/stdc++.h>
using namespace std;
void left_shift(int arr[],int &l){
   
        for(int i=0;i<l-1;i++){
arr[i]=arr[i+1];
    }
   l--;
}
int main(){
// int n;
// cout<<"enter size of array"<<endl;
// cin>>n;
int l;
cout<<"enter number of elements in array"<<endl;
cin>>l;
// int key;
// cout<<"enter key"<<endl;
// cin>>key;
int arr[l];
for(int i=0;i<l;i++){
    cin>>arr[i];
}

//append(arr,n,l,key);
left_shift(arr,l);
cout<<"aniket"<<endl;
for(int i=0;i<l;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
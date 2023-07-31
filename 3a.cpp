#include<bits/stdc++.h>
using namespace std;
bool check(int arr[],int n,int num){
    if(num==0){
        return true;
    }
    for(int i=0;i<n;i++){
        if(num==arr[i]){
            return false;
        }
    }
    return true;
}
int main(){
int arr[20]={0};
int num;
int i=0;
while(i<20){
    cout<<"enter the number"<<endl;
cin>>num;
if(num>=10&&num<=100){
    if(check(arr,i,num)){
    arr[i]=num;
    i++;
    }
    else{
        cout<<"number is already present"<<endl;
    }
}
else{
    cout<<"entered number is out of range"<<endl;
}
}
for(int i=0;i<20;i++){
    cout<<arr[i]<<" ";
}
return 0;
}
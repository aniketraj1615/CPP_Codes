#include<bits/stdc++.h>
using namespace std;
int ct[10]={0};
int search_min(int arr[],int n){
   int min=arr[0];
   int index=0;
for(int i=0;i<n;i++){   //finding smallest at
   if(arr[i]<min){
    min=arr[i];
    index=i;
   }
}
arr[index]=1000;//ab y minimum m nahi aayga
 cout<<index;
cout<<index<<endl;
return index;
}
void gynt(int at[],int bt[] ,int n){
    int g[n+1]={0};
    for(int i=0;i<n;i++){
        int a=search_min(at,n);
        bt[a]=0;
        g[i]=a;

    }
    cout<<"gyntt chart"<<endl;
for(int i=0;i<n+1;i++){
    
    if(g[i]!=0){
        cout<<g[i]<<" "<<endl;
    }
}
}
int main(){
int n;
cout<<"enter the no of processes"<<endl;
cin>>n;
// int pro_no[n];
// int at[n];
// int bt[n];
// cout<<"enter the detailes of the process"<<endl;
// for(int i=0;i<n;i++){
//     cout<<"enter the process number of: "<<i+1<<endl;
//     cin>>pro_no[i];
//     cout<<"enter the arival time of: "<<i+1<<endl;
//     cin>>at[i];
//     cout<<"enter the burst time of: "<<i+1<<endl;
//     cin>>bt[i];

// }
// gynt(at,bt,n);
int a
return 0;
}
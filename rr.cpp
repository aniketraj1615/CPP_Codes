#include<bits/stdc++.h>
using namespace std;
int index(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(key==arr[i]){
            arr[i]=-1;
            return i;
        }
    }
    return -1;
}

int main(){
    int n=6;
   
    cout<<"enter number of process"<<endl;
    // cin>>n;
    int pro_no[n]={1,2,3,4,5,6};
    int at[n]={10,9,3,2,3,11};
    int bt[n]={4,5,2,1,3,6};
    int tat[n];
    int wt[n];
    int tq;
    cout<<"enter time quantum"<<endl;
    int rem_bt[n];
    for(int i=0;i<n;i++){
        rem_bt[i]=bt[i];
    }
// for(int i=0;i<n;i++){
//     cout<<"enter process number of proecss :"<<i+1<<endl;
//     cin>>pro_no[i];
//      cout<<"enter  arrival time of process  :"<<i+1<<endl;
//     cin>>at[i];
//      cout<<"enter burst time of process  :"<<i+1<<endl;
//     cin>>bt[i];
// }
int sort_at[n];
for(int i=0;i<n;i++){
    sort_at[i]=at[i];
}
sort(sort_at, sort_at + n);
// int start,end;
// for(int i=0;i<n;i++){
//     start=i;
//     int j=i+1;
//     while(sort_at[i]==sort_at[j]){
//         j++;
//     }
//     end=j-1;
//     i=j-1;
//     if(start==end){

//     }
// }
cout<<"sorted arrival time"<<endl;
for(int i=0;i<n;i++){
    cout<<sort_at[i]<<" ";
}
cout<<endl;
for(int i=0;i<n-1;i++){
   int j= index(at,n,sort_at[i]);
   cout<<j<<endl;
   int temp=bt[i];
   bt[i]=bt[j];
   bt[j]=temp;

    temp=pro_no[i];
   pro_no[i]=pro_no[j];
   pro_no[j]=temp;
}
cout<<"pro no after arranging"<<endl;

for(int i=0;i<n;i++){
cout<<pro_no[i]<<" ";
}
cout<<endl;
cout<<"burst time after arranging"<<endl;

for(int i=0;i<n;i++){
cout<<bt[i]<<" ";
}
cout<<endl;
int ct[n];
cout<<"at[0]"<<sort_at[0]<<" "<<"bt[0]"<<bt[0]<<endl;
ct[0]=sort_at[0]+bt[0];
cout<<"completion time of process 4"<<endl;
cout<<ct[0]<<endl;
wt[0]={0};
tat[0]=ct[0]-sort_at[0];
for(int i=1;i<n;i++){
    if(rem_bt[i]>tq){
        rem_bt[i]-=tq;
        

    }
    else{
        rem_bt[i]=0;
    }

}
cout<<"p n"<<"   "<<"at"<<"   "<<" bt"<<"   "<<"ct"<<"   "<<"tat"<<"   "<<"wt"<<endl;
for(int i=0;i<n;i++){
cout<<pro_no[i]<<"      "<<sort_at[i]<<"      "<<bt[i]<<"      "<<ct[0]<< "      "<<tat[0]<<"      "<<wt[0]<<endl;
}
float sum_wt=0;
float sum_tat=0;
for(int i=0;i<n;i++){
sum_wt+=wt[i];
sum_tat+=tat[i];
}
cout<<sum_wt<<endl;
cout<<sum_tat<<endl;
float avg_wt=(sum_wt/n);
float avg_tat=(sum_tat/n);
cout<<"avg wt time is :"<<avg_wt<<endl;
cout<<"avg tat time is :"<<avg_tat<<endl;
return 0;
}
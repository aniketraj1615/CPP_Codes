#include<bits/stdc++.h>
using namespace std;
int main(){
    cout<<"enter total numbers for which you want to find the avg"<<endl;
    int n;
    cin>>n;
    int *arr=(int *)malloc(n);
    cout<<"enter the number of integers whose avg you want to find"<<endl;
double avg=0;
    for(int i=0;i<n;i++){
cin>>arr[i];
avg=avg+arr[i];
    }
    avg=avg/n;
    cout<<"avg of integers"<<endl;
    cout<<avg<<endl;
    
return 0;
}
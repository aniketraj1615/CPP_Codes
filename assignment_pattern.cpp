#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"enter height of the triangle"<<endl;
cin>>n;
for(int i=0;i<=n;i++){
    for(int l=0;l<n-i;l++)cout<<" ";
    for(int j=0;j<i;j++)cout<<min(j,i-j-1)+1<<" ";
    cout<<endl;
}
return 0;
}
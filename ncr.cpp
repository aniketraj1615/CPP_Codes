#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
   while(n--){ 
    int i,j,k;
    cin>>i>>j>>k;
    while(k--){
        char c=s[j];
        for(int i=k-2;i>=0;i--){
s[i]=s[i+1];
        }
        s[0]=c;
    }}
    cout<<s<<endl;
return 0;
}
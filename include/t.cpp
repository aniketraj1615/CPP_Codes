#include<bits/stdc++.h>
using namespace std;
int check(string s ,int k){
for(int i=0;i<k;i++){
    if(s[i]=='a'){
        return 1;
    }
}
return 0;
}
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    char str[n]={'\0'};
    string s;
    cin>>s;
    int sum=0;
for(int i=0;i<n;i++){
    if(check(str,s[i])){
sum++;
    }
    else{
        sum=sum+2;
    }
    str[i]=s[i];
}
cout<<sum<<endl;
}

return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
string s[10];
for(int i=0;i<10;i++){
    cin>>s[i];
}
string temp;

for(int i=0;i<9;i++){
    for(int j=0;j<9-i;j++){
        if(s[j]>s[j+1]){
            
            temp=s[j];
            s[j]=s[j+1];
            s[j+1]=temp;
        }
    }
}
cout << "name after sorting :" << endl;
for(int i=0;i<10;i++){
    cout<<s[i]<<endl;
}
return 0;
}
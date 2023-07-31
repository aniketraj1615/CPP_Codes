#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){

int n;
cin>>n;
int arr[n];

for(int i=0;i<n;i++){
cin>>arr[i];

}
sort(arr,arr+n);
int static l=1;
cout<<"Case #"<<l<<":";

 if(n<=4){
 cout<<n<<endl;
 }
else{
    int a=4;
    for(int i=4;i<n;i++){
        if(arr[i]>=(i+1)){
            a++;
        }
        else{
            break;
        }
    }
    cout<<a<<endl;
}


l++;
}

return 0;
}
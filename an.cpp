#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
	while(t--){
	 int n;
	 int arr[n];
	 int neg=0;
	 int z=0;
	 for(int i=0;i<n;i++){
	     cin>>arr[i];
	     if(arr[i]<0){
            
	         neg++;
	     }
	    else if(arr[i]==0){
           
	         z++;
	     }
	 }
	 if(z!=0){
	     cout<<"0"<<endl;
	 }
	 else{
	     if(neg%2==0){
	         cout<<"0"<<endl;
	     }
	     else{
	         cout<<"1"<<endl;
	     }
	 }
	}
	return 0;
}

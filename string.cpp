#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    int arr[n];
	    int c=0;
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        
	    }
         for(int i=0;i<n;i++){
	       if(arr[i]==1){
               c++;
           }
	        
	    }
	   if(c==0){
           cout<<"0"<<endl;
       }
       else{
           cout<<n-c<<endl;
       }
	}
	return 0;
}

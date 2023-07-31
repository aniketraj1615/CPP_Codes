#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
        int static l=1;
	    cout<<"Case #"<<l<<": ";
		int minc,mxc,minm,mxm,miny,mxy,mink,mxk;
		int p[4],q[4],r[4];
		for(int i=0;i<4;i++){
		cin>>p[i];
		}
		for(int i=0;i<4;i++){
		cin>>q[i];
		}
		for(int i=0;i<4;i++){
		cin>>r[i];
		}
		
		int k=min(p[0],q[0]);
		minc=min(k,r[0]);
		int o=min(p[1],q[1]);
		minm=min(o,r[1]);
		int z=min(p[2],q[2]);
		miny=min(z,r[2]);
		int v=min(p[3],q[3]);
		mink=min(v,r[3]);
		int minsum=minc+minm+miny+mink;
		int arr[4]={minc,minm,miny,mink};
		if(minsum==pow(10,6)){
			
			cout<<minc<<" "<<minm<<" "<<miny<<" "<<mink<<endl;
		}
		else if(minsum<pow(10,6)){
		    
		    cout<<"IMPOSSIBLE"<<endl;
		}
		else if(minsum>pow(10,6)){
			int k=minsum-pow(10,6);
			if(arr[0]>=pow(10,6)){
			    cout<<pow(10,6)<<" "<<"0"<<" "<<"0"<<" "<<"0";
			}
			else if(arr[0]+arr[1]>pow(10,6)){
			    cout<<arr[0]<<" "<<(pow(10,6)-arr[0])<<" "<<"0"<<" "<<"0";
			}
			
			else if(arr[0]+arr[1]+arr[2]>pow(10,6)){
			    cout<<arr[0]<<" "<<arr[1]<<" "<<(pow(10,6)-arr[0]-arr[1])<<" "<<"0";
			}
			   else if(arr[0]+arr[1]+arr[2]+arr[3]>pow(10,6)){
			    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[3]<<" "<<(pow(10,6)-arr[0]-arr[1]-arr[3]);
			} 
			}

		l++;
	}
	

	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    // array to pointers; array stores the address of variable which is of integer type in this example
int *p[5];
int arr[5]={1,2,3,4,5};
for(int i=0;i<5;i++){
    p[i]=&arr[i];
}
for(int i=0;i<5;i++){
    cout<<*p[i]<<" ";
    
}
return 0;
}
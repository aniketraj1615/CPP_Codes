#include<bits/stdc++.h>
using namespace std;
int fact(int n){
    if(n<=1){
        return 1;
    }
    return n*fact(n-1);
}

int palin(int n){
    int m=n;
    int sum=0;
    while(n){
        sum=sum*10+n%10;
        n=n/10;
    }
    if(sum==m){
        return 1;
    }
    else{
        return 0;
    }
}
int ncr(int n,int r){
    return fact(n)/(fact(r)*fact(n-r));
}
int npr(int n,int r){
    return fact(n)/fact(n-r);
}
int fibb(int n){
    if(n<=1){
        return n;
    }
    return fibb(n-1)+fibb(n-2);
}
int armstrong(int n){
    int digit=log10(n)+1;
    cout<<"digit"<<digit<<endl;
    int sum=0;
    int m=n;
    while(n){
        sum+=pow(n%10,digit);
        n=n/10;
    }
    cout<<"sum"<<sum<<endl;
    if(sum==m){
        return 1;
    }
    return 0;
}
void leap(int n){
    if(n%400==0||n%100!=0&&n%4==0){
        cout<<"leap year"<<endl;
    }
    else {
cout<<"not a leap year"<<endl;
    }
}

int main(){
//    int n;
//    cin>>n;

//    cout<<factorial(5)<<endl;

// cout<<palin(121)<<endl;

// pascal traingle
// cout<<ncr(5,2)<<endl;
// cout<<ncr(1,0)<<endl;
// cout<<"pascal traingle"<<endl;
// int n=5;
// for(int i=0;i<n;i++){
// int a=n-i-1;
// while(a--){
//     cout<<" ";
// }
// for(int j=0;j<=i;j++){
//     cout<<ncr(i,j)<<"  ";
// }
// cout<<endl;
// }
// cout<<fibb(0)<<endl;
// cout<<fibb(1)<<endl;
// cout<<fibb(2)<<endl;
// cout<<fibb(3)<<endl;
// cout<<fibb(4)<<endl;
// cout<<fibb(5)<<endl;

// for(int i=5;i>=1;i--){
//     int a=5-i;
//     while(a--){
//         cout<<" ";
//     }
//     for(int j=1;j<=i;j++){
//         cout<<"*";
//     }
//     cout<<endl;
// }

// cout<<armstrong(371)<<endl;
// cout<<armstrong(372)<<endl;
// cout<<armstrong(1634)<<endl;

// leap(1000);
// leap(2004);

return 0;
}
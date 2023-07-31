#include<bits/stdc++.h>
using namespace std;
int main(){
    int row1,row2,col1,col2;
cout<<"enter the size of matrix 1"<<endl;
cout<<"row of matrix 1"<<endl;
cin>>row1;
cout<<"col of matrix 1"<<endl;
cin>>col1;
int m1[row1][col1];
cout<<"enter the size of matrix 2"<<endl;
cout<<"row of matrix 2"<<endl;
cin>>row2;
cout<<"col of matrix 2"<<endl;
cin>>col2;
int m2[row2][col2];
if(col1!=row2){
    cout<<"multiplictaion is not possible"<<endl;
}
else{
    cout<<"enter the elements of matrix 1"<<endl;
    for(int i=0;i<row1;i++){
        for(int j=0;j<col1;j++){
            cin>>m1[i][j];
        }
    }
        cout<<"enter the elements of matrix 2"<<endl;
    for(int i=0;i<row2;i++){
        for(int j=0;j<col2;j++){
            cin>>m2[i][j];
        }
    }
    int m3[row1][col2];
    for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            m3[i][j]=0;
            for(int k=0;k<row2;k++){
                m3[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }
     for(int i=0;i<row1;i++){
        for(int j=0;j<col2;j++){
            cout<<m3[i][j]<<" ";
            }
            cout<<endl;
            }
}

return 0;
}
#include<bits/stdc++.h>
using namespace std;
void transpose();
class matrix{
private:
int row;
int col;
int arr[10][10];
public:

void size(int a,int b){
    row=a;
    col=b;
}
void setdata(){
    cout<<"enter data"<<endl;
    for(int i=0;i<row;i++){   
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
        
    }
}
void display(){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
friend void transpose(matrix );
};
void transpose(matrix m){
    for(int i=0;i<m.col;i++){
        for(int j=0;j<m.row;j++){
            cout<<m.arr[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main(){
matrix m;
m.size(3,2);
m.setdata();
m.display();
transpose(m);

return 0;
}
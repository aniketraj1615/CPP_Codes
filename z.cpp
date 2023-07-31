#include<bits/stdc++.h>
using namespace std;
class a{
    public:
    void fun(){
        cout<<"aaaaaa"<<endl;
    }
    int fun(){
        int b=10;
        return b;
    }
};
int main(){
a obj,obj1;
obj.fun();
cout<<obj.fun();
return 0;
}
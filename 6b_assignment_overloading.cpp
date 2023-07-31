#include<bits/stdc++.h>
using namespace std;
class str{
    char s[20];
    public:
    void setdata(){
        cin>>s;
    }
   
    int operator ==(str obj){
        if(!strcmp(s,obj.s)){
            return 1;
        }
        return 0;
    }
};
int main(){
str s1,s2;
cout<<"enter the string s1 :"<<endl;
s1.setdata();
cout<<"enter the string s2 :"<<endl;
s2.setdata();
if(s1==s2){
    cout<<"equalllll"<<endl;
}
else{
    cout<<"noooooooooooooo"<<endl;
}
return 0;
}
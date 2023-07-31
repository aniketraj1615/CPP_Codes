#include<stdio.h>

int main(){
    string s1,s2;
    cout<<"enter string 1"<<endl;
    cin>>s1;
    cout<<"enter string 2"<<endl;
    cin>>s2;
    int n1=0;
    int n2=0;
    int j=0;
    int i=0;
    while(s1[i]!='\0'){
        n1++;
        i++;
    }
     while(s2[j]!='\0'){
        n2++;
        j++;
    }
    int res=0;
    if(n1>n2){
        cout<<"N0"<<endl;
    }
    else{
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(s2[j]==s1[i]){
                    res++;
                    break;
                }
            }

        }
        if(res==n1){
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }


return 0;
}
#include <bits/stdc++.h>
using namespace std;
//stack<char>stackk;
struct stk{
    int size;
    int top;
    char *s;
};
void create(struct stk *stackk,string expre){
stackk->size=100;
stackk->top=-1;
stackk->s=(char *)malloc(sizeof(char)*stackk->size);

}
void push(struct stk *stackk,int key){
    if(stackk->top==stackk->size-1){
        cout<<"stack over flow"<<endl;
        return;
    }
    stackk->top++;
    stackk->s[stackk->top]=key;
}
char pop(struct stk *stackk){
    char a='#';
    if(stackk->top==-1){
        cout<<"stack under flow"<<endl;
        return a;
    }
    a=stackk->top;
    stackk->top--;
    return a;
}
bool empty(struct stk *stackk){
    if(stackk->top==-1){
        return true;
    }
    return false;
}
bool is_balanced(struct stk *stackk,string expre){
for(int i=0;i<expre.length();i++){
    if(empty(stackk)){
        push(stackk,expre[i]);
    }
    else if(stackk->top=='('&&expre[i]==')'||stackk->top=='{'&&expre[i]=='}'||stackk->top=='['&&expre[i]==']'){
        pop(stackk);
    }
    else{
        push(stackk,expre[i]);
    }
}
if(empty(stackk)){
    return true;
}
return false;
}
int main()
{
    struct stk stackk;
string expre="({}[])";
create(&stackk,expre);
if(is_balanced(&stackk,expre)){
    cout<<"string is balanced";
}
else{
    cout<<"not balanced";
}
    return 0;
}
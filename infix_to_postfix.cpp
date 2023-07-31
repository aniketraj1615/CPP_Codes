#include <bits/stdc++.h>
using namespace std;
struct stackk
{
    char data;
    struct stackk *next;

} *top = NULL;
void push(char key)
{
    struct stackk *t;
    t = (struct stackk *)malloc(sizeof(struct stackk));
    if (t == NULL)
    {
        cout << "stackk is full" << endl;
    }
    else
    {
        t->data = key;
        t->next = top;
        top = t;
    }
}
char pop()
{
    struct stackk *t;
    int x = -1;
    if (top == NULL)
    {
        cout << "stack is empty" << endl;
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        delete (t);
    }
    return x;
}
int is_empty(){
    if(top==NULL){
        return 1;
    }
    return 0;
}
int is_operand(char a)
{
    if ((a == '+') || (a == '-') || (a == '*') || (a == '/'))
    {
        return 0;
    }
    return 1;
}
int presidence(char a)
{
    if((a=='+')||(a=='-')){
        return 1;
    }
    else if((a=='*')||(a=='/')){
        return 2;
    }
    return 0;
}
char *infix_to_postfix(char *infix){
int n=strlen(infix);
char *postfix;
postfix=(char*)malloc((n+2)*sizeof(struct stackk));
int i=0,j=0;
while(infix[i]!='\0'){
    if(is_operand(infix[i])){
        postfix[j++]=infix[i++];
    }
    else 
    {
        if(presidence(infix[i])>presidence(top->data)){
        push(infix[i++]);
    }
    else{
        postfix[j++]=pop();
    }
    }
}
while(top!=0){
    postfix[j++]=pop();
}
postfix[j]='\0';
return postfix;
}
int main()
{
    char *infix = "a+b-c*d-e/g+l";
   push('#');
    char *ans=infix_to_postfix(infix);
    cout<<ans<<endl;
    
    return 0;
}
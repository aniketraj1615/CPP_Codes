#include <bits/stdc++.h>
using namespace std;
struct stackk
{
    int size;
    int top;
    char *s;
}st;
void create(struct stackk *st,char *exp)
{
    //cout << "size of stack" << endl;
    st->size=strlen(exp);
    st->top = -1;
    st->s = (char *)malloc(st->size * sizeof(char));
}
void push(struct stackk *st, int key)
{
    if (st->top == st->size - 1)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        st->top++;
        st->s[st->top] = key;
    }
}
int pop(struct stackk *st)
{
    int x = -1;
    if (st->top == -1)
    {
        cout << "stack underflow" << endl;
        return x;
    }
    x = st->s[st->top];
    st->top--;
    return x;
}
void display(struct stackk st)
{
    for (int i = st.top; i >= 0; i--)
    {
        cout << st.s[i] << " ";
    }
}
bool is__empty(struct stackk st)
{
    if (st.top == -1)
    {
        return true;
    }
    return false;
}
bool is_full(struct stackk st)
{
    if (st.top == st.size - 1)
    {
        return true;
    }
    return false;
}
int peek(struct stackk st, int index)
{
    int x = -1;
    if (st.top - index + 1 < 0)
    {
        cout << "invalid index" << endl;
    }
    else
    {
        x = st.s[st.top - index + 1];
    }
    return x;
}
bool is_balanced(char *exp){
     int n=strlen(exp);
for(int i=0;i<n;i++){
if(exp[i]=='('){
push(&st,exp[i]);
}
else if(exp[i]==')'){
    if(is__empty(st))return false;
    pop(&st);
}
}
if(st.top==-1){
return true;
}
return false;
}
int main()
{
    
    
    char *exp="((a+b)*(c+d)";
  create(&st,exp);
    cout<<is_balanced(exp);

    display(st);
    return 0;
}
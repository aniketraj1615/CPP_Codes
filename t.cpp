#include <bits/stdc++.h>
using namespace std;

struct stackk
{
    int size;
    int top;
    int *s;
}stk;
void create(struct stackk *stk,char *exp)
{
    // cout<<"enter the size of the element"<<endl;
    stk->size = strlen(exp);
    stk->top = -1;
    stk->s = (int *)malloc(sizeof(int) * stk->size);
}
void push(struct stackk *stk ,int key)
{
    if (stk->top == stk->size - 1)
    {
        cout << "stack overflow" << endl;
        return;
    }
    else
    {
        stk->top++;
        stk->s[stk->top] = key;
    }
}
int pop(struct stackk *stk)
{
    int x = -1;
    if (stk->top == -1)
    {
        cout << "stack underflow" << endl;
        return x;
    }

    x = stk->s[stk->top];
    stk->top--;
    return x;
}
int is_empty(struct stackk *stk)
{
    if (stk->top == -1)
    {
        return 1;
    }
    return 0;
}
int is_balanced(struct stackk *stk ,char *exp)
{    int n=strlen(exp);

    for (int i = 0; i<n; i++)
    {
        if ((exp[i] == '{') || (exp[i] == '(') || (exp[i] == '['))
        {
            push(stk,exp[i]);
        }
        else if ((exp[i] == '}') || (exp[i] == ')') || (exp[i] == ']'))
        {
            if (stk->s[stk->top] == exp[i])
            {
                pop(stk);
            }
           
             else{  
                  return false;
                  }
            
        }
        else if(stk->top==-1){
            push(stk,exp[i]);
        }
    }
    if (stk->top == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{   char *exp="{()[]}";
    
    create(&stk,exp);
    cout << is_balanced(&stk,exp);

    return 0;
}
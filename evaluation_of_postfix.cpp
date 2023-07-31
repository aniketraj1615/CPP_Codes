#include <bits/stdc++.h>
using namespace std;
struct stackk
{
    int data;
    struct stackk *next;
} *top = NULL;
void push(int key)
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
int is_emt()
{
    if (top == NULL)
    {
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
    if ((a == '+') || (a == '-'))
    {
        return 1;
    }
    else if ((a == '*') || (a == '/'))
    {
        return 2;
    }
    return 0;
}
// char *infix_to_postfix(char *infix){
// int n=strlen(infix);
// char *postfix;
// postfix=(char*)malloc((n+2)*sizeof(struct stackk));
// int i=0,j=0;
// while(infix[i]!='\0'){
//     if(is_operand(infix[i])){
//         postfix[j++]=infix[i++];
//     }
//     else
//     {
//         if(presidence(infix[i])>presidence(top->data)){
//         push(infix[i++]);
//     }
//     else{
//         postfix[j++]=pop();
//     }
//     }
// }
// while(top!=0){
//     postfix[j++]=pop();
// }
// postfix[j]='\0';
// return postfix;
// }
int eval_of_postfix(char *postfix)
{

    int x1, x2;
    int r = 0;
    for (int i = 0; postfix[i] != '\0'; i++)
    {
        if (is_operand(postfix[i]))
        {
            push(postfix[i] - '0');
        }
        else
        {

            x2 = pop();
            x1 = pop();
            switch (postfix[i])
            {
            case '+':r = x1 + x2;break;
        
            case '-':r = x1 - x2;break;
              
            case '*':r = x1 * x2;break;
              
            case '/':r = x1 / x2;break;
             
            }
            push(r);
        }
    }
    return top->data;
}
int main()
{
    char *postfix = "35*62/+4-";
    int ans = eval_of_postfix(postfix);
    cout << ans;
    return 0;
}
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
        cout << "stack over flow" << endl;
        return;
    }
    else
    {
        t->data = key;
        t->next = top;
        top = t;
    }
}
int pop()
{
    int x = -1;
    struct stackk *t;
    if (top == NULL)
    {
        cout << "stack under flow" << endl;
        return x;
    }
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        delete (t);
        return x;
    }
}
void display(struct stackk *p)
{
    while (p != 0)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
bool is_emptyy(struct stackk *k)
{

    if (k == NULL)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool is_balance(char *exp)
{
    int n = strlen(exp);
    for (int i = 0; i < n; i++)
    {
        if (exp[i] = '(')
        {
            push(exp[i]);
        }
        else if (')')
        {
            if (is_emptyy(top))
            {
                return false;
            }
            pop();
        }
    }
    if (is_emptyy(top))
    {
        return true;
    }
    return false;
}
int main()
{
    char *exp = "((a+b)+(c+d))";

    cout << is_balance(exp);
    return 0;
}
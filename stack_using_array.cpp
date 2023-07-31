#include <bits/stdc++.h>
using namespace std;
struct stackk
{
    int size;
    int top;
    int *s;
};
void create(struct stackk *st)
{
    cout << "size of stack" << endl;
    cin >> st->size;
    st->top = -1;
    st->s = (int *)malloc(st->size * sizeof(int));
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
bool is_empty(struct stackk st)
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
int main()
{
    struct stackk st;
    create(&st);
    push(&st, 2);
    push(&st, 4);
    cout << pop(&st) << endl;
    cout << pop(&st) << endl;
    cout << pop(&st) << endl;

    display(st);
    return 0;
}
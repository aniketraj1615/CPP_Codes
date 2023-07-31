#include <bits/stdc++.h>
using namespace std;
struct stackk
{
    int size;
    int topL;
    int topR;
    int *s;
};
void create(struct stackk *st)
{
    cout << "size of stack" << endl;
    cin >> st->size;
    st->topL = -1;
    st->topR=st->size;
    st->s = (int *)malloc(st->size * sizeof(int));
}
void push(struct stackk *st, int keyL,int keyR)
{
    if (st->topL == st->topR)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        st->topL++;
        st->s[st->topL] = keyL;
        st->topR--;
        st->s[st->topR]=keyR;
    }
}
void pop(struct stackk *st)
{
    int xL = -1;
    int xR=-1;
    if (st->topL == -1)
    {
        cout << "stack underflow" << endl;
        cout<<xL<<endl;
    }
   else{ xL = st->s[st->topL];
    st->topL--;
    cout<<xL<<endl;}
     if (st->topR == st->size)
    {
        cout << "stack underflow" << endl;
        cout<<xR<<endl;
    }
   else{ xR = st->s[st->topR];
    st->topR++;
    cout<<xR<<endl;}
}
void display(struct stackk st)
{
    for (int i = st.topL; i >= 0; i--)
    {
        cout << st.s[i] << " ";
    }
    cout<<"endl another stack elemts"<<endl;
     for (int i = st.topR; i <=st.size-1; i++)
    {
        cout << st.s[i] << " ";
    }
}
bool is_empty(struct stackk st)
{
    if (st.topL == -1)
    {
        return true;
    }
    return false;
}
bool is_full(struct stackk st)
{
    if (st.topL == st.size - 1)
    {
        return true;
    }
    return false;
}
int peek(struct stackk st, int index)
{
    int x = -1;
    if (st.topL - index + 1 < 0)
    {
        cout << "invalid index" << endl;
    }
    else
    {
        x = st.s[st.topL - index + 1];
    }
    return x;
}
int main()
{
    struct stackk st;
    create(&st);
    push(&st, 2,20);
    push(&st, 4,40);
     display(st);
    cout<<endl;
pop(&st);

   
    return 0;
}
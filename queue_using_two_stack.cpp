#include <bits/stdc++.h>
using namespace std;
struct stack1
{
    int size;
    int top;
    int *s;
} st1, st2;

void create(struct stack1 *st)
{
    cout << "enter the size of stack" << endl;
    cin >> st->size;
    st->top = -1;
    st->s = (int *)malloc(sizeof(int) * st->size);
}
void push(struct stack1 *st, int k)
{
    if (st->top == st->size - 1)
    {
        cout << "stack overflow" << endl;
    }
    else
    {
        st->top++;
        st->s[st->top] = k;
    }
}
int pop(struct stack1 *st)
{
    int x = -1;
    if (st->top == -1)
    {
        cout << "stack under flow" << endl;
    }
    else
    {
        x = st->s[st->top];
        st->top--;
    }
    return x;
}
bool isEmpty(struct stack1 *st)
{
    if (st->top == -1)
    {
        return true;
    }
    return false;
}
void display(struct stack1 *st)
{
    for (int i = st->top; i >= 0; i--)
    {
        cout << st->s[i] << " ";
    }
}
void enqueue(int k)
{
    push(&st1, k);
}
int dequeue(struct stack1 *st1, struct stack1 *st2)
{
    int x = -1;
    if (isEmpty(st2))
    {
        if(isEmpty(st1)){
cout<<"queue is empty"<<endl;
        }
        else{
            while(!isEmpty(st1)){
                push(st2,pop(st1));
            }
        }
        return pop(st2);
    }
    else
    {
        x = st2->s[st2->top];
        pop(st2);
    }
    return x;
}
int main()
{
    create(&st1);
    create(&st2);
    enqueue(1);
    enqueue(10);
    enqueue(100);
    enqueue(1000);
    display(&st1);
    cout << endl;
    cout << dequeue(&st1, &st2)<<endl;
    cout << dequeue(&st1, &st2)<<endl;
    cout << dequeue(&st1, &st2)<<endl;
    cout << dequeue(&st1, &st2)<<endl;
    cout << dequeue(&st1, &st2)<<endl;

    return 0;
}
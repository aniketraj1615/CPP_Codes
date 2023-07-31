#include <bits/stdc++.h>
using namespace std;
struct queuee
{
    int data;
    struct queuee *next;

} *front = NULL, *rear = NULL;
void enqueuee(int key)
{
    struct queuee *t = (struct queuee *)malloc(sizeof(struct queuee));
    ;
    if (t == NULL)
    {
        cout << "queue overflow" << endl;
        return;
    }

    else
    {
        t->data = key;
        t->next = NULL;
        if (front == 0)
        {
            front = t;
        rear = t;
        }
        rear->next=t;
        rear = t;
    }
}
int dequeuee()
{
    int x = -1;
    if (front==0)
    {
        cout << "queue underflow" << endl;
    }
    else
    {
        struct queuee *p = front;
        front = front->next;
        x = p->data;
        delete (p);
    }
    return x;
}
void display(struct queuee *q){
    while(q){
        cout<<q->data<<" ";
        q=q->next;
    }
}
int main()
{
enqueuee(1);
enqueuee(2);

enqueuee(3);
display(front);
cout<<endl;
cout<<dequeuee()<<endl;
cout<<dequeuee()<<endl;
cout<<dequeuee()<<endl;
cout<<dequeuee()<<endl;
display(front);
    return 0;
}
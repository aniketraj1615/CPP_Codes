#include <bits/stdc++.h>
using namespace std;
struct queuee
{
    int size;
    int *s;
    int front;
    int rear;
} ;
void create(struct queuee *q)
{
    cout << "enter the size of queue" << endl;
    cin >> q->size;
    q->front = -1;
    q->rear = -1;
    q->s = (int *)malloc(q->size*sizeof(int));
}
void enqueuee(struct queuee *q,int key)
{
    if (q->rear ==q->size - 1)
    {
        cout << "queuee is full" << endl;
        return;
    }
    q->rear++;
    q->s[q->rear] = key;
}
int dequeue(struct queuee *q)
{
    int x = -1;
    if (q->rear == q->front)
    {
        cout << "there is nothing in queue for deletion" << endl;
    }
    else
    {   
        q->front++;
        x = q->s[q->front];
        
    }
    return x;
}
void display(struct queuee *q)
{
    for (int i = q->front+1; i <= q->rear; i++)
    {
        cout << q->s[i] << " ";
    }
}
int main()
{   struct queuee q;
    create(&q);
    enqueuee(&q,1);
    enqueuee(&q,2);
    enqueuee(&q,3);
    enqueuee(&q,4);
    enqueuee(&q,5);
    enqueuee(&q,6);
    display(&q);
    cout << endl;
    cout<<dequeue(&q)<<endl;
    cout<<dequeue(&q)<<endl;
    cout << endl;
    display(&q);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
struct queuee
{
    int data;
    struct queuee *next;

} *front = NULL, *rear = NULL;
void enqueuee_back(int key)
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
void enqueuee_front(int key)
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
        t->next = front;
        
        if (front == 0)
        {
            front = t;
        rear = t;
        }
        front=t;
    }
}
int dequeuee_front()
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
int dequeuee_back()
{
    int x = -1;
    if (front==0)
    {
        cout << "queue underflow" << endl;
    }
    else
    {
        struct queuee *p = front;
        struct queuee *q=NULL;
        while(p->next!=0){
           
            q=p;
            p=p->next;
        }
        x=p->data;
        q->next=p->next;
        delete(p);
        return x;
       
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
enqueuee_back(1);
enqueuee_back(2);

enqueuee_back(3);
display(front);
cout<<endl;
enqueuee_front(3000);
cout<<endl;
display(front);
cout<<dequeuee_front()<<endl;
cout<<dequeuee_back()<<endl;
cout<<dequeuee_back()<<endl;
display(front);
//cout<<dequeuee()<<endl;
// cout<<dequeuee()<<endl;
// cout<<dequeuee()<<endl;
// display(front);
    return 0;
}
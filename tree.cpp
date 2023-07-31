#include <bits/stdc++.h>
using namespace std;
struct nodet
{
    struct nodet *lchild;
    int data;
    struct nodet *rchild;
} *root = NULL;
struct node
{

    struct nodet *data;
    struct node *next;
} *front = NULL, *rear = NULL;

void enqueue(struct nodet *key)
{
    struct node *t;
    t = (struct node *)malloc(sizeof(struct node));
    t->data = key;
    t->next = NULL;
    if (front == 0)
    {
        front = rear = t;
    }
    else
    {
        rear->next = t;
        rear = t;
    }
}
nodet * dequeee()
{
    nodet *x = NULL;
    struct node *p;
    if (rear==0)
    {
        cout << "que is empty" << endl;
    }
    else
    {
        p = front;
        front = front->next;
        x = p->data;
        delete (p);
    }
    return x;
}
bool isempty()
{
    if(rear==0){
        return true;
    }
    return false;
}

void create()
{
    struct nodet *p, *t;
    int x;
    struct node q;
    cout << "enter the root value" << endl;
    cin >> x;
    root = (struct nodet *)malloc(sizeof(struct nodet));
    root->data = x;
    root->lchild = root->rchild = 0;
    enqueue(root);
    while (!isempty())
    {
        p = dequeee();
        cout << "enter lchild " << endl;
        cin >> x;
        if (x != -1)
        {
            t = (struct nodet *)malloc(sizeof(struct nodet));
            t->data = x;
            t->lchild = t->rchild = 0;
            p->lchild = t;
            enqueue(t);
        }
         else break;
        cout << "enter rchild " << endl;
        cin >> x;
        if (x != -1)
        {
            t = (struct nodet *)malloc(sizeof(struct nodet));
            t->data = x;
            t->lchild = t->rchild = 0;
            p->rchild = t;
            enqueue(t);
        } 
        else break;
    }
}
void preorder(struct nodet *p)
{
    if (p == NULL) return;
    cout << p->data;
    preorder(p->lchild);
    preorder(p->rchild);
}
void inorder(struct nodet *p)
{

    if (p == NULL) return;
    preorder(p->lchild);
    cout << p->data;
    preorder(p->rchild);
}
void postorder(struct nodet *p)
{
    if (p == NULL) return;
cout<<"aniket"<<endl;
    preorder(p->lchild);
    preorder(p->rchild);
    cout << p->data;
}
int main()
{
    create();
    inorder(root);
    return 0;
}
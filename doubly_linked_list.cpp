#include <bits/stdc++.h>
using namespace std;
struct node
{
    struct node *prev;
    int data;
    struct node *next;
} *first = NULL;
void create(int arr[], int n)
{
    struct node *t, *last;
    first = (struct node *)malloc(sizeof(struct node));
    first->data = arr[0];
    first->prev = NULL;
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = (struct node *)malloc(sizeof(struct node));
        t->data = arr[i];
        t->prev = last;
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
    while (p != 0)
    {
        cout << p->data << " ";
        p = p->next;
    }
}
void insert(struct node *p,int pos,int key){
    struct node *t;
    
    t=(struct node *)malloc(sizeof(struct node));
    
    if(pos==0){
        t->data=key;
        t->prev==NULL;
        t->next=p->next;
        first=t;
    }
    else{
    for(int i=0;i<pos-1;i++){
        p=p->next;
    }
    t->data=key;
   t->next=p->next;
   p->next=t;
   t->prev=p;
    }
}
int delete_node(int pos){
    struct node *p;
    p=first;
    int x=-1;

    
    if(pos==0){
      first=first->next;
       x=p->data;
      
     
      delete(p);
      if(first)first->prev=NULL;
      return x;
    }
    else{
    for(int i=0;i<pos-1;i++){
        p=p->next;
    }
    x=p->data;
    p->prev->next=p->next;

   if(p->next)p->next->prev=p->prev;
   delete(p);
   return x;
    }
}
void reverse(struct node *p){
    struct node *temp=NULL;
    while(p!=NULL){
        temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p!=NULL&&p->next==NULL){
first=p;
        }
    
    }
}
int main()
{
    int arr[] = {10, 2, 3, 4, 5};
    create(arr, 5);
    //display(first);
    cout<<endl;
   // insert(first,5,222);
   //cout<<delete_node(3)<<endl;
   reverse(first);
    display(first);
cout<<endl;
   
    return 0;
}
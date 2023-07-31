#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first=NULL,*second=NULL,*third=NULL;
void createA(int arr[],int n){
    struct node *last,*t;
    first=(struct node *)malloc(sizeof(struct node));
    first->data=arr[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
t=(struct node *)malloc(sizeof(struct node));
t->data=arr[i];
t->next=NULL;
last->next=t;
last=t;
    }
}

void createB(int arr[],int n){
    struct node *last,*t;
    second=(struct node *)malloc(sizeof(struct node));
    second->data=arr[0];
    second->next=NULL;
    last=second;
    for(int i=1;i<n;i++){
t=(struct node *)malloc(sizeof(struct node));
t->data=arr[i];
t->next=NULL;
last->next=t;
last=t;
    }
}
void display(struct node *p){
    while(p!=0){
    cout<<p->data<<" ";
    p=p->next;}
}
void delete_dup(struct node *p){
    struct node *q=p->next;
    while(q!=0){
        if(q->data!=p->data){
            p=q;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete (q);
            q=p->next;
        }
    }
}
void merge(struct node *p,struct node *q){
struct node *last;
if(p->data<q->data){
    third=last=p;
    p=p->next;
    last->next=NULL;
    
}
else{
    third=last=q;
    q=q->next;
    last->next=NULL;
    
}
while(p!=0&&q!=0){
    if(p->data<q->data){
        last->next=p;
        last=p;
        p=p->next;
        last->next=NULL;
    }
    else{
        last->next=q;
        last=q;
        q=q->next;
        last->next=NULL;
    }
}
if(p!=0){
    last->next=p;
}
else{
    last->next=q;
}
}
bool is_loop(struct node *first){
    struct node *p=first,*q=first;

    do{
        p=p->next;
        q=q->next;
        q=q!=0?q->next:NULL;
    }while(p&&q&&p!=q);
    if(p==q){
        return true;
    }
    else{
        return false;
    }
}
void prnt_cir_linkedlist(struct node *p){
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=first);
}
void recursive_print(struct node *p){
    static int flage=0;
    if(p!=first||flage==0){
        cout<<p->data<<" ";
        flage=1;
        recursive_print(p->next);
    }
}
void insert_node_cir(int index,int key){
    if(index==0){
        struct node *t ,*p;
        p=first;
        do{
            p=p->next;
        }while(p->next!=first);
        t=(struct node *)malloc(sizeof(struct node));
        t->data=key;
        t->next=first;
        p->next=t;
        first=t;
    }
    else{struct node *t ,*p;
        p=first;
        t->data=key;
        for(int i=0;i<index-1;i++){
          p=p->next;
        }
        t->next=p->next;
        p->next=t;

    }
}
int main(){
int arr[]={1,2,3,4,5};
//int array[]={0,13,16,40};
struct node *t1,*t2;
createA(arr,5);
//createB(array,4);
t1=first;
t2=first->next->next->next->next;
t2->next=t1;
cout<<is_loop(first)<<endl;
//prnt_cir_linkedlist(first);
recursive_print(first);
cout<<endl;
insert_node_cir(4,12);
prnt_cir_linkedlist(first);
//display(first);
//cout<<endl;
//createB(array,4);
//display(second);
//cout<<endl;
//merge(first,second);
//display(third);
//cout<<endl;


//delete_dup(first);
//display(first);
cout<<endl;
//display(second);

return 0;
}
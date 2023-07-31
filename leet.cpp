#include<bits/stdc++.h>
using namespace std;
struct node {
    int data;
    struct node *next;
}*first=NULL,*second=NULL,*third=NULL;
int count(struct node *p){
int c=0;
while(p!=0){
    c++;
    p=p->next;
}
return c;
}

void delete_dup(struct node *p){
struct node *q=p->next;
while(q!=0){
    if(p->data!=q->data)
   { p=q;
    q=q->next;}
    else{
        p->next=q->next;
        delete(q);
        q=p->next;
    }
}
}

void delete_node(int position){
    struct node* p,*q=NULL;
int x;
if(position==0){
    p=first;
    int x=p->data;
    first=first->next;
    delete p;
}
else{
    p=first;
    for(int i=0;i<position-1;i++){
        q=p;
        p=p->next;
    }
    q->next=p->next;
     x=p->data;
    delete p;
}
}
void remove_duplicate(struct node* k){
    struct node*q=NULL;
    int a=0;
    while(k!=0){
        q=k;
        a++;
        k=k->next;
        if(q->data==k->data){
delete_node(a);
        }
    }
}
void add_node(int pos,int key){
    struct node *t,*q;
    if(pos==0){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=key;
        t->next=first;
        first=t;
    }
    else if(pos>0){
q=first;
for(int i=0;i<pos-1&&q;i++){
    
    q=q->next;
}
if(q){
    t=(struct node*)malloc(sizeof(struct node));
t->data=key;
    t->next=q->next;
q->next=t;
}
    }
}
void createA(int arrA[],int n){
    struct node *t,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=arrA[0];
    first->next=NULL;
last=first;
for(int i=1;i<n;i++){
    t=(struct node*)malloc(sizeof(struct node));
    t->data=arrA[i];
    t->next=NULL;
    last->next=t;
    last=t;
}
}
// void createB(int arrB[],int n){
//     struct node *t,*last;
//     second=(struct node*)malloc(sizeof(struct node));
//     second->data=arrB[0];
//     second->next=NULL;
// last=second;
// for(int i=1;i<n;i++){
//     t=(struct node*)malloc(sizeof(struct node));
//     t->data=arrB[i];
//     t->next=NULL;
//     last->next=t;
//     last=t;
// }}
void display(struct node *p){
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }

}
void concat(struct node *p,struct node *q){
third=p;
while(p!=0){
    p=p->next;
}
p->next=second;
}
  int getDecimalValue(struct node* p) {
// struct node *q,*r;
    
//         while(p){
//             r=q;
//             q=p;
//             p=p->next;
//             q->next=r;
//         }
//         first=q;
       int long long sum=0;
        int static l=0;
        while(first){
            sum+=(first->data)*(pow(2,l));
            l++;
        }
        return sum;
    }
    void reverse(struct node *p){
        struct node *r=NULL,*q=NULL;
        while(p!=0){
            r=q;
            q=p;
            p=p->next;
            q->next=r;
    
        }
        first=q;
    }
int main(){
int arrA[]={1,0,0,1,1};
//int arrB[]={12,13,14,15};

createA(arrA,5);
reverse(first);
//cout<<getDecimalValue(first);
//createB(arrB,4);
display(first);
//display(second);
//concat(first,second);
//delete_dup(first);
//remove_duplicate(first);
//add_node(1,123);
//add_last(12345);
//display(third);
return 0;
}
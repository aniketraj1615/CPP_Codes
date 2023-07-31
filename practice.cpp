#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first=NULL;
int num_nodes(struct node* p){
   int count=0;
    while(p!=0){
count++;
p=p->next;
    }
    return count;
}
void add_node(int pos,int key){
if(pos<=num_nodes(first)&&pos>0){
  if(pos==0){  struct node *t;
    t=(struct node*)malloc(sizeof(struct node));
    t->data=key;
    t->next=first;
    first=t;
    }
else{
struct node *p,*q;
p=(struct node*)malloc(sizeof(struct node));
q=first;
for(int i=0;i<pos-1;i++){
q=q->next;
}
p->data=key;
p->next=q->next;
q->next=p;
}
}

else{
    cout<<"given position is not valid"<<endl;
}
}
void create(int arr[],int n){
    struct node *t,*last;
    first=(struct node*)malloc(sizeof(struct node));
    first->data=arr[0];
    first->next=NULL;
    last =first;
   
    for(int i=1;i<n;i++){
        t=(struct node*)malloc(sizeof(struct node));
        t->data=arr[i];
        t->next=NULL;
        last->next=t;
        last=t;

    }

}
void add_sorted(int key){
    struct node *p=first;
    struct node *q=NULL;
while(p&&p->data<key){
q=p;
p=p->next;
}
struct node *t;
t=(struct node *)malloc(sizeof(struct node));
t->data=key;
t->next=q->next;
q->next=t;
}
void display(struct node* p){
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
}
int main(){
int arr[]={2,3,4,15,56};
create(arr,5);
add_node(3,12);
add_sorted(1);
display(first);
}
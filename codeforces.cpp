#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first=NULL;
void create(int arr[],int n){
    struct node *t,*last;
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
void display(struct node *p){
    while(p!=0){
        cout<<p->data<<" ";
        p=p->next;
    }
}
void Pair_swap(struct node *p){
while(p!=0&&p->next!=0){
int temp=p->data;
p->data=p->next->data;
p->next->data=temp;
p=p->next->next;

}
}
void swap_by_pointer(struct node *p){
    struct node *q,*r;
    while(1){
        q=p->next;
        r=q->next;
        if(r==0||r->next==0){
            p->next=r;
            break;
        }
        q->next=p;
        p->next=r->next;
        p=r;

        
        
    }
}
int main(){
int arr[]={1,2,3,4,5,};
create(arr,5);
display(first);
cout<<endl;
Pair_swap(first);
display(first);
return 0;
}
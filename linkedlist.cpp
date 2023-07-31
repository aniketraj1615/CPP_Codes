#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first=NULL;
void create(int arr[],int n){
    int i;
    struct node *t,*last;
first=(struct node*)malloc(sizeof(struct node));
first->data=arr[0];
first->next=NULL;
last=first;
for(int i=1;i<n;i++){
    t=(struct node*)malloc(sizeof(struct node));
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
struct node* display_from_end(struct node *p,int n){
struct node *q=p;
int N=0;
while(q!=0){
    N++;
    q=q->next;
}
n=N-n;

   for(int i=0;i<n;i++){
    p=p->next;
   }
   return p;
}
void first_node(struct node *p){
    
    p=p->next;
    delete(first);
    first=p;
}
int main(){
int arr[]={3,4,5,6,7};
create(arr,5);
display(first);
cout<<endl;
cout<<"!!!"<<endl;
struct node* p=display_from_end(first,1);
cout<<p->data;
// first_node(first);
// display(first);
return 0;
}
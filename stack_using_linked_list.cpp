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
first_node(first);
display(first);
return 0;
}
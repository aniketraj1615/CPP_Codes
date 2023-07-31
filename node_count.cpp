#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node* next;
}*first=NULL;
void creat(int arr[],int n){
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
int count(struct node *p){
int c=0;
while(p!=0){
    c++;
    p=p->next;
}
return c;
}
int sum(struct node *p){
int s=0;
while(p!=0){
    s+=p->data;
    p=p->next;
}
return s;
}
int max_element(struct node *p){
int mx=p->data;
while(p!=0){
    if((p->data)>mx){
mx=p->data;
    }
    p=p->next;
}
return mx;
}
int min_element(struct node *p){
int minimum=p->data;
while(p!=0){
    if((p->data)<minimum){
minimum=p->data;
    }
    p=p->next;
}
return minimum;
}
node* searching_element(struct node *p,int key){

while(p!=0){
    if((p->data)==key){
        return (p);

    }
    
    p=p->next;
    
}
return NULL;

}
int main(){
int arr[]={2,3,4,5,6};
creat(arr,5);
cout<<"number of nodes in linked list is :"<<count(first)<<endl;
cout<<"sum of all the data in linked list is :"<<sum(first)<<endl;
cout<<"largest element of linked list is"<<max_element(first)<<endl;
cout<<"smallest element of linked list is"<<min_element(first)<<endl;
cout<<searching_element(first,5)<<endl;
cout<<searching_element(first,-1)<<endl;
return 0;
}
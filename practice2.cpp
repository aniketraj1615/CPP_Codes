#include<bits/stdc++.h>
using namespace std;
struct que{
    int size;
    int front;
    int rear;
    int *a;
}q;
void create(struct que *q){
    cout<<"enter size of que"<<endl;
    cin>>q->size;
    q->a=(int *)malloc(sizeof(int)*sizeof(struct que));
q->front=-1;
q->rear=-1;
}
void enqueue(struct que *q,int k){
    if(q->rear==q->size-1){
        cout<<"queue over flow"<<endl;
    }
    q->rear++;
    q->a[q->rear]=k;
}
int dequeue(struct que *q){
    int x=-1;
    if(q->front==q->rear){
        cout<<"que under flow"<<endl;
    }
    else{
       
        q->front++;
         x=q->front;
    }
    return x;
}
int main(){

return 0;
}
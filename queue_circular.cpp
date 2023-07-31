#include<bits/stdc++.h>
using namespace std;
struct queuee{
    int size;
    int front;
    int rear;
    int *s;
};
void create(struct queuee *q){
cout<<"enter the size of queuee"<<endl;
cin>>q->size;
q->front=q->rear=-1;
q->s=(int *)malloc(sizeof(int)*q->size);
}
void enqueue(struct queuee *q ,int n){
    if((q->rear+1)%q->size==q->front){
        cout<<"queuee over flow"<<endl;
    }
    else{
        q->rear=(q->rear+1)%q->size;
        q->s[q->rear]=n;
    }
}
int dequeuee(struct queuee *q){
    int x=-1;
    if(q->front==q->rear){
        cout<< "queue is empty"<<endl;
    }
    else{
        q->front=(q->front +1)%q->size;
        x=q->s[q->front];
    }
    return x;
}
void display(struct queuee *q){
   int i=q->front+1;
   do{
       cout<<q->s[i]<<" ";
       i=(i+1)%q->size;
   }while(i!=(q->rear+1)%q->size);
}
int main(){
struct queuee q;
create(&q);
enqueue(&q,1);
enqueue(&q,2);
enqueue(&q,3);
enqueue(&q,4);
display(&q);
cout<<endl;
cout<<dequeuee(&q)<< " ";
cout<<endl;
display(&q);
cout<<endl;
cout<<dequeuee(&q)<< " ";
cout<<endl;
cout<<dequeuee(&q)<< " ";
cout<<endl;
enqueue(&q,123);
enqueue(&q,1213);

display(&q);

    return 0;
}
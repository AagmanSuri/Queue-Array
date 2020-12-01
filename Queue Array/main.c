#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int size;
    int front;
    int Rear;
    int *Q;
};

void Create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->Rear=-1;
    q->Q=(int *) malloc(sizeof(int));
    
}
void enqueue(struct Queue *q,int x)
{
    if(q->Rear==q->size-1)
    {
    printf("Queue is full");
    }
    else
    {
        q->Rear++;
        q->Q[q->Rear]=x;
    }
}
int Dequeue(struct Queue *q)
{
    int x=-1;
    if(q->front==q->Rear)
    {
        printf("queue is Empty");
    }
    else
    {
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}
void Display(struct Queue q)
{
    int i;
    for(i=q.front+1;i<=q.Rear;i++)
    {
        printf("%d ",q.Q[i]);
        
    }
    printf("\n");
}
int main()
{
    struct Queue q;
    
    Create(&q, 5);
    
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    
    Display(q);
    return 0;
}


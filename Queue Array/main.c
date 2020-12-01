#include <stdio.h>
#include <stdlib.h>

struct Queue
{
    int *size;
    int *front;
    int *Rear;
    int *Q;
};

void Create(struct Queue *q,int size)
{
    q->size=size;
    q->front=q->Rear=-1;
    q->Q=(int *) malloc(sizeof(int));
    
}


int main()
{
    struct Queue q;
    Create(q, 5);
    return 0;
}

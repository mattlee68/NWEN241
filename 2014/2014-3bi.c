#include <stdlib.h>
#define Node_Size sizeof(Node)

typedef char Data;

typedef struct node{
    Data data;
    struct node *next;
}Node;

typedef Node *ptrNode;

typedef struct queue{
    int cnt;
    ptrNode front;
    ptrNode rear;
}Queue;

void enqueue(Data, Queue *);
Data dequeue(Queue *);

int main(void){

}

void enqueue(Data d, Queue *q){
    ptrNode node = malloc(Node_Size);
    node->data = d;
    node->next = NULL;
    q->rear->next = node;
    q->rear = node;
    q->cnt++;
}

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
    //fill in with an appropriate main method
}

void enqueue(Data d, Queue *q){
    ptrNode node = malloc(Node_Size);
    node->data = d;
    node->next = NULL;
    q->rear->next = node;
    q->rear = node;
    q->cnt++;
}

Data dequeue(Queue *q){
    ptrNode temp = q->front;
    Data d = temp->data;
    q->front = q->front->next;
    q->cnt--;
    free(temp);
    return d;
}

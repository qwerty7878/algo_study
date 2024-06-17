#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_QUEUE_SIZE 5

typedef int element;

typedef struct QueueType{
    int front;
    int rear;
element data[MAX_QUEUE_SIZE];
} QueueType;

void error(char *message)
{
    fprintf(stderr, "%s\n", message);
    exit(1);
}

void init_queue(QueueType *q)
{
    q->rear = -1;
    q->front = -1;
}

void queue_print(QueueType *q)
{
    for (int i = 0; i < MAX_QUEUE_SIZE; i++) {
        if (i <= q->front || i > q->rear)
            printf("    |");
        else
            printf(" %2d |", q->data[i]);
    }
    printf("\n");
}

int is_full(QueueType *q)
{
    if (q->rear == MAX_QUEUE_SIZE - 1)
        return 1;
    else
        return 0;
}

int is_empty(QueueType *q)
{
    if (q->front == q->rear)
        return 1;
    else
        return 0;
}

void enqueue(QueueType *q, int item)
{
    if (is_full(q)) {
        error("큐가 포화상태입니다.");
        return;
    }
    q->data[++(q->rear)] = item;
}

element dequeue(QueueType *q)
{
    if (is_empty(q)) {
        error("큐가 공백상태입니다.");
        return -1;
    }
    int item = q->data[++(q->front)];
    return item;
}

int main(void)
{
    int item = 0;
    int arr[5] = {};
    QueueType q;

    init_queue(&q);
    printf("5개 숫자 입력: ");
    for(int i = 0; i < MAX_QUEUE_SIZE; i++){
        scanf("%d",&arr[i]);
    }
    
    for(int i = 0; i < MAX_QUEUE_SIZE; i++){
        enqueue(&q, arr[i]); 
        queue_print(&q);
    }
    
    item = dequeue(&q); queue_print(&q);
    item = dequeue(&q); queue_print(&q);

    return 0;
}
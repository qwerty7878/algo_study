#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef char element;

typedef struct  ListNode
{
    element data;
    struct ListNode* link;
} ListNode;

ListNode* insert_first(ListNode* head, element data){

    ListNode* node = (ListNode*)malloc(sizeof(ListNode));
    node -> data = data;
    if(head == NULL){
        head = node;
        node -> link = head;
    }

    else{
        node->link = head -> link;
        head->link = node;
    }

    return head;
}

ListNode* insert_last(ListNode* head, element data){

    ListNode* node = (ListNode*)malloc(sizeof(ListNode));
    node -> data = data;
    if(head == NULL){
        head = node;
        node -> link = head;
    }

    else{
        node->link = head -> link;
        head->link = node;
        head = node;
    }
    
    return head;
}

void print_list(ListNode* head){
    ListNode* p;

    if(head == NULL)
        return;
    p = head -> link;
    printf("** 원형 리스트 항목 출력 **\n");
    do{
        printf("%c->",p->data);
        p = p -> link;

    }while (p != head);
    printf ("%c",p->data);
}

int main(void){
    ListNode* head = NULL;
    head = insert_last(head, 'O');
    head = insert_last(head, 'R');
    head = insert_last(head, 'E');
    head = insert_last(head, 'A');
    head = insert_first(head, 'K');
    print_list(head);

    return 0;
}

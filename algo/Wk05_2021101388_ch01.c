#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_LIST_SIZE 100

typedef int element;

typedef struct
{
    element array[MAX_LIST_SIZE];
    int size;
} ArrayListType;

void error(char* message)
{
    fprintf(stderr, "%s\n", message);
    exit(1);
}

void create_list(ArrayListType* L)
{
    L ->size = 0;
}

int is_empty(ArrayListType* L)
{   
    return L -> size == 0;
}

int is_full(ArrayListType* L)
{
    return L -> size == MAX_LIST_SIZE;
}

element get_entry(ArrayListType* L, int pos)
{
    if(pos < 0 || pos >= L->size)
        error("위치 오류");
    return L->array[pos];
}

void print_list(ArrayListType* L)
{
    for(int i = 0; i < L -> size; i++)
        printf("%d->", L->array[i]);
    printf("NULL\n");
}

void insert_last(ArrayListType* L, element item)
{
    if(L->size >= MAX_LIST_SIZE){
        error("리스트 오버 플로우");
    }
    L->array[L->size++] = item;
}

void insert(ArrayListType* L,int pos, element item)
{
    if(!is_full(L) && (pos >= 0) && (pos <= L->size)) {
        for(int i = (L -> size -1 ); i >= pos; i--)
            L -> array[i + 1] = L->array[i];
        L->array[pos] = item;
        L->size++;
        
    }
}

element delete(ArrayListType* L,int pos)
{
    element item;

    if(pos < 0 || pos >= L -> size)
        error("위치 오류");
        item = L -> array[pos];
        for(int i = pos; i < (L -> size - 1); i++)
            L -> array[i] = L -> array[i + 1];
        L -> size--;
        return item;
}

int main(void)
{
    ArrayListType list;

    create_list(&list); // 1
    insert_last(&list, 100); print_list(&list); // 2
    insert_last(&list, 200); print_list(&list); // 3
    delete(&list, 0); // 4
    print_list(&list); // 5
    return 0;
    
}
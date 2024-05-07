#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAX_STACK_SIZE 100

typedef struct Students{
    int id;
    char name[30];
    char dept[30];
    double grade;
}Students;

typedef Students Element;
Element data[MAX_STACK_SIZE];
int top;

void error(char str[])
{
    printf("%s\n", str);
    exit(1);
}

void init_stack()
{
    top = -1;
}

int size()
{
    return top + 1;
}

int is_empty()
{
    return (top == -1);
}

int is_full()
{
    return (top == MAX_STACK_SIZE - 1);
}

void push(Element e)
{
    if (is_full())
        error("스택 포화 에러");
    data[++top] = e;
}

Element pop()
{
    if (is_empty())
        error("스택 공백 에러");
    return data[top--];
}

Element peek()
{
    if (is_empty())
        error("스택 공백 에러");
    return data[top];
}

Students get_student(int id,char name[],char dept[],double grade){
    Students s;
    s.id = id;
    strcpy(s.name, name);
    strcpy(s.dept, dept);
    s.grade = grade;

    return s;
}

void print_stack(char msg[])
{
    int i;
    printf("%s[%2d]= ", msg, size());
    for (i = 0; i < size(); i++)
        printf("\n\t%-10d %-15s %-20s %.1lf", data[i].id, data[i].name, data[i].dept, data[i].grade);
    printf("\n");
}

int main()
{
    init_stack();
    
    push(get_student(20241234, "차은우","컴퓨터공학과", 90.8));
    push(get_student(20241235, "아이유","인공지능융합", 72.5));
    push(get_student(20241236, "김지원","사이버보안과", 80.5));
    push(get_student(20241237, "마동석","소프트웨어공학", 85.0));
    push(get_student(20241238, "김수현","정보통신공학",73.8));
    
    print_stack("친구 5명 stack에 삽입 후");

    pop();
    pop();
    
    print_stack("친구 3명 stack에 삭제 후");
    return 0;
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void printDigit(int n){
    if(n == 0) 
        return;

    // printf("%d\n",n%10); 먼저 쓰면 역순으로 출력
    printDigit(n/10);
    printf("%d\n",n%10);
}

int main(void) {
    int n;
    printf("숫자 정수: ");
    scanf("%d",&n);

    if(n < 0){
        printf("음수입니다. 입력 오류!");
        exit(1);

    }
    else
        printDigit(n);

    return 0;
}
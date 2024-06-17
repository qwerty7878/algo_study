#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int seq_search(int list[], int searchKey, int low, int high)
{
    for(int i=low; i<=high; i++)
        if(list[i] == searchKey)
            return i;
        return -1;
}

int main(void){
    int list[10] = {11, 28, 36, 59, 24, 15, 67, 48, 12, 10};
    int searchKey;
    int num;
    printf("순차 검색\n\n");
    
    while(1){
        printf("==메  뉴==\n");
        printf("1. Search\n");
        printf("2. Exit\n\n");
        printf("번호 선택: ");
        scanf("%d",&num);
        if(num == 1){
            printf("찾고자 하는 키: ");
            scanf("%d",&searchKey);
            printf("찾고자 하는 키 %d는 %d번쨰 위치해 있다.\n\n",searchKey,seq_search(list,searchKey, 0, 10) + 1);
        }
        else if(num ==2){
            break;
        }
        else{
            printf("\n번호 선택 오류, 다시 입력해주세요.!!!\n\n");
        }
    }
    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main (void) {
    int score[] = {31, 63, 62, 87, 14 ,20, 52, 11,80, 20};
    int key;
    printf("원하는 키 값을 입력하세요?");
    scanf("%d",&key);
    
    for(int i = 0; i < 10; i++) {

        if(score[i] == key) {
            printf("%d키는 %d 인덱스에 있습니다.",key,i);
            break;
        }
    }
    return 0;
}
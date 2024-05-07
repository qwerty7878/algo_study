#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int gcd(int x, int y){
    if(y == 0)
        return x;
    else
        return gcd(y,(x%y));
}

int main(void) {
    int x,y;
    printf("숫자 정수 2개를 입력하세요:");
    scanf("%d %d",&x,&y);
    
    printf("숫자 %d과 숫자 %d의 최대공약수= %d", x,y,gcd(x,y));
}
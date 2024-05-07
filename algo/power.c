#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double power(int x, int n){
    if(n == 0)
        return 1;
    else if(n % 2 == 0)
        return power(x * x,n/2);
    else
        return x * power(x * x, (n - 1)/2);
}

int main(void) {
    int x,n;
    printf("숫자1 숫자2 입력: ");
    scanf("%d %d",&x,&n);

    printf("%d의 %d승 = %f",x,n,power(x,n));

    return 0;
}
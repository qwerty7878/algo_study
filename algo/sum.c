#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// int sum(int n){
//     if(n == 1)
//         return 1;
//     else{
//         return n + sum(n-1);
//     } 
// }

int main(void) {
    int n;
    int sum = 0;
    printf("숫자 정수: ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        sum += i;
    }

    printf("1부터 %d까지 합: %d",n,sum);
    // printf("1부터 %d까지 합: %d",n,sum(n));

    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// int factorial(int n){
//     if(n == 1)
//         return 1;
//     else
//         return n * (factorial(n-1));
// }

int main(void) {
    int n;
    int result = 1;
    printf("정수 입력: ");
    scanf("%d",&n);
    for(int i = 1; i <= n; i++){
        result *= i;
    }
    printf("%d! = %d\n",n,result);
    // printf("%d! = %d\n",n, factorial(n));

    return 0;
}
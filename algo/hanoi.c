#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hanoi_tower(int n, char A, char B, char C){
    if(n == 1)
        printf("원반 1을 %c에서 %c로 옮긴다.\n",A,C);
    else{
        hanoi_tower(n - 1, A, C, B);
        printf("원반 %d을 %c에서 %c로 옮긴다.\n",n,A,C);
        hanoi_tower(n - 1, B, A, C);
    }

}

int main(void) {
    
    hanoi_tower(3, 'A', 'B', 'C');

    return 0;
}
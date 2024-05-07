#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isSame(int n, int setNum[], int k) {
    for (int i = 0; i < k; i++) {
        if (setNum[i] == n) {
            return 1;
        }
    }
    return 0;
}

int main(void) {
    int setNum[5];
    int k = 0;

    while (k < 5) {
        int n;
        printf("[%d]번째 원소 입력: ", k + 1);
        scanf("%d", &n);

        if (!isSame(n, setNum, k)) {
            setNum[k] = n;
            printf("{");
            for (int i = 0; i <= k; i++) {
                if (i == k) {
                    printf("%d", setNum[i]);
                } else {
                    printf("%d, ", setNum[i]);
                }
            }
            printf("}\n");
            k++;
        } else {
            printf("%d 중복 원소 오류!\n", n);
        }
    }
    return 0;
}

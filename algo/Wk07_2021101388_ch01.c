#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void unionn(int A[], int B[], int setNum[], int k) {

    int tmp; // 오름차순 출력을 위한 임시변수

    for (int i = 0; i < 5; i++) {
        setNum[i] = A[i];   // 중복 확인을 위해 a 값 전부 할당
    }

    for (int i = 0; i < 5; i++) { // 중복 체크
        for (int j = 0; j < 5; j++) {
            if (B[i] == A[j]) // 중복원소면 정지
                break;

            if (j == 4) { 
    // 중복되지 않으면 값 할당(같은 걍우 반복이 종료되니까 0~4까지인데 4까지 갔다는건 break에 안걸렸다 즉 중복이 없었다는 뜻)
                setNum[k] = B[i];
                k++;
            }
        }
    }

    printf("A와B의 합집합: ");

    for (int i = 0; i < k - 1; i++) { // 오름차순 정렬
        for (int j = i + 1; j < k; j++) {
            if (setNum[i] > setNum[j]) {
                tmp = setNum[i];
                setNum[i] = setNum[j];
                setNum[j] = tmp;
            }
        }
    }

    for (int i = 0; i < k; i++) {   //  합집합 출력
        printf("%d ", setNum[i]);
    }
        printf("\n");
    }

void intersect(int A[], int B[], int setNum[], int k) {

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (A[i] == B[j]) { //  두 집합에 대한 교차 체크
                setNum[k] = A[i];
                k++;
            }
        }
    }

    printf("A와B의 교집합: ");

    for (int i = 0; i < k; i++) //  교집합 출력
        printf("%d ", setNum[i]);

        printf("\n");
}

void subtract(int A[], int B[], int setNum[], int k) {

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (A[i] == B[j])   //  두 집합 비교하여 같으면 멈춤
                break;

            if (j == 4) {   //  같지 않다면 4번 까지 반복할때까지 break값에 걸리지 않을 것, 그 때의 값을 할당
                setNum[k] = A[i];
                k++;
            }
        }
    }

    printf("A와B의 차집합: ");

    for (int i = 0; i < k; i++)     //  차집합 출력
        printf("%d ", setNum[i]);

    printf("\n");
}

int main(void) {
    int A[5], B[5], setNum[10]; // 배열 크기 설정

    printf("집합A의 원소: ");
    for (int i = 0; i < 5; i++) // 배열 a 값 할당
        scanf("%d", &A[i]);

    printf("집합B의 원소: ");
    for (int i = 0; i < 5; i++) // 배열 b 값 할당
        scanf("%d", &B[i]);

    unionn(A, B, setNum, 5); // 합집합
    intersect(A, B, setNum, 0); // 교집합
    subtract(A, B, setNum, 0); // 차집합
    
    return 0;
}
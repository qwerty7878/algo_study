#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// void arrPrint(int a[], int n){
// // void arrPrint(int *n, int n){ // *n 2번째 방법

//     for(int i = 0; i < n; i++){
//         printf("%3d",a[i]);
//     }
// }


// int main(void) {
//     int arr[] = {10,7,23,85,22};

//     for(int i = 0; i < 5; i++){
//         printf("%3d", arr[i]);

//         arrPrint(arr, 5);
//         // arrPrint(&arr, 5);  // 2번째 방법
//     }

//     return 0;
// }

// 응용 1 키 값 찾기
// int main(void){
//     int arr[] = {10,7,23,85,22};
//     int key;
//     scanf("%d",&key);
//     printf("키 값 입력 : ");

//     printf("찾고자 하는 값 %d는 %d번째에 있습니다.",key,arrPrint(&arr, 5, key));
// }


// int arrPrint(int *n, int n, int k){
//     for(int i = 0; i < n; i++){
//         if(a[i] == k)
//             return i;
//     }
// }


// 응용 2 오름차순 
int numsort(int a[], int n){
    int temp = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = i + 1; j  < n; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    return *a; //키 교환으로 데이터 정렬된 배열항목 모두가 메인함수로 반환
}

int main(void){
    int arr[] = {10,7,23,85,22};
    numsort(arr,5);

    for(int i = 0; i < 5; i++){
        printf("%3d",arr[i]);
    }

    return 0;
}

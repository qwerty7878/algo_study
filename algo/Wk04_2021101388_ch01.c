#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int lowprice(int a[], int n){
    int min = a[0];
    for(int i = 0; i < n; i++){
        if(a[i] < min)
            min = a[i];
    }

    return min;
}

int pricesort(int* a, int n){
    int temp;
    for(int i = 0; i < n -1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp; 
            }
        }
    }
    return *a;
}

int main(void){
    int prices[] = {3200,3000,1900,4000,6000,1800,8000,4200,4100,2900,4210};
    pricesort(prices,11);
    printf("최소 가격은 %d원 입니다.\n",lowprice(prices,10));
    printf("**저가 가격 -> 고가 가격 출력**\n");
    for(int i = 0; i < 10; i++){
        printf("%5d",prices[i]);
    }
    return 0;
}


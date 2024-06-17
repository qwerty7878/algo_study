#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int dataSort(int* numArr, int n){
    int temp;
    for(int i = 0; i < n -1; i++){
        for(int j = i + 1; j < n; j++){
            if(numArr[i] > numArr[j]){
                temp = numArr[i];
                numArr[i] = numArr[j];
                numArr[j] = temp; 
            }
        }
    }

    return *numArr;
}

int binarySearch(int numArr[],int searchKey, int low, int high)
{
    int mid;
    while( low <= high ){
        mid = (low+high)/2;
        if( searchKey == numArr[mid] )
            return mid;
        else if( searchKey > numArr[mid] )
            low = mid+1;
        else 
            high = mid-1;
        }
        return -1;
}

int main(void){
    int numArr[10];
    int searchKey;
    for(int i = 0; i < sizeof(numArr) / sizeof(int); i++){

        printf("input Data : ");
        scanf("%d",&numArr[i]);
    }

    for(int i = 0; i < sizeof(numArr) / sizeof(int); i++){
        dataSort(numArr,10);
        printf("%3d", numArr[i]);
    }
    printf("\n찾고자 하는 키 : ");
    scanf("%d",&searchKey);
    
    printf("찾고자 하는 키 %d 은(는) 인덱스 위치 %d에 있다.",searchKey,binarySearch(numArr,searchKey, 0, 9));
    return 0;
}
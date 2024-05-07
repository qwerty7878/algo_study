#include <stdio.h>

int main(void){
    int arr[3][3] = {{90,12,80},{40,22,60},{50,35,25}};
    int temp;

    printf("\n ** 소트 전 데이터 ** \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%3d ",arr[i][j]);
        }
        printf("\n");
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            int l = j + 1;
            for(int k = i; k < 3; k++){
                while(l < 3){
                    if(arr[i][j] > arr[k][l]){
                        temp = arr[k][l];
                        arr[k][l] = arr[i][j];
                        arr[i][j] = temp;
                    }
                    l++;
                }
                l = 0;
            }
        }
    }

    printf("\n ** 소트 후 데이터 ** \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%3d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
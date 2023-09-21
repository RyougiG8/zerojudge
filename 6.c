//c508
#include <stdio.h>
#include <stdlib.h>

void quick_sort(int arr[], int left, int right){
    if (left < right){
        int ref = arr[(left + right) / 2];
        int i = left - 1;
        int j = right + 1;

        while (1){
            while (ref > arr[++i]);
            while (ref < arr[--j]);
            if (i >= j){
                break;   
            }

            char temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }

        quick_sort(arr, left, i - 1);
        quick_sort(arr, j + 1, right);
    }
}


int main(void){
    int num, count, temp;

    while (scanf("%d", &num) != EOF){
        int arr[num];
        for (int i = 0; i < num; i++){
            scanf("%d", &arr[i]);
        }
        
        quick_sort(arr, 0, num - 1);

        count = 0;
        int change[100000];
        for (int j = 0; j < num; j++){
            printf("%d ", arr[j]);
            if (temp != arr[j]){
                change[count++] = arr[j];
                temp = arr[j];
            }
        }
        printf("\n");

        for (int k = count - 1; k >= 0; k--){
            printf("%d ", change[k]);
        }
        printf("\n");

    }
    
    return 0;
}
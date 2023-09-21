//d583
#include <stdio.h>

void selection_sort(int seat_num[], int num){
    int temp;
    for (int j = 0; j < num - 1; j++){
        int min_index = j;
        for (int k = j + 1; k < num; k++){
            if (seat_num[k] < seat_num[min_index]){
                min_index = k;
            }
        }

        temp = seat_num[min_index];
        seat_num[min_index] = seat_num[j];
        seat_num[j] = temp;
    }
}

int main(void){
    int num_penguin;

    while (scanf("%d", &num_penguin) != EOF){
        int seat_num[num_penguin];
        
        for (int i = 0; i < num_penguin; i++){
            scanf("%d", &seat_num[i]);
        }

        int num = 1;
        for (int i = 0; i < num_penguin; i++){
            printf("%d ", num++);
        }
        
        printf("\n");
    }

    return 0;
}


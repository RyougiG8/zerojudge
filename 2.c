//c547
#include <stdio.h>

int main(void){
    int num;
    int array[10000];

    while (scanf("%d", &num) != EOF){
        array[0] = array[1] = 1;
        if(num >= 2){
            for (int i = 2; i <= num; i++){
                array[i] = (array[i - 1] + array[i - 2]) % 1000000007;
            }
        }
        printf("%d\n", array[num]);
    }     
    return 0;
}
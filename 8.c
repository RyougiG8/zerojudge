//c658
//kill
#include <stdio.h>
#include <stdlib.h>

int check(long long int num){
    int temp = 0;
    long long int encode = 0;
    while (num != 0){
        temp = num % 10;    
        if(temp == 1)       encode = encode + 1;
        else if (temp == 2) encode = encode + 10;
        else if (temp == 3) encode = encode + 100;
        else if (temp == 4) encode = encode + 1000;
        else if (temp == 5) encode = encode + 10000;
        else if (temp == 6) encode = encode + 100000;
        else if (temp == 7) encode = encode + 1000000;
        else if (temp == 8) encode = encode + 10000000;
        else if (temp == 9) encode = encode + 100000000;
        else if (temp == 0) encode = encode + 10000000000;
        num /= 10;
    }

    return encode;
}

int main(void){
    int num;
    long long int encode;
    long long int c_encode; 
    
    while (scanf("%d", &num) != EOF){ 
        encode = check(num);
        for (long long int j = 34; j < 99999; j++){
                c_encode = check(j * j);
                if(encode == c_encode){
                    printf("%lld ", j * j);
                }
            }
        printf("\n");
    }

    return 0;

}
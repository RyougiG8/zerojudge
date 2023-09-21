//d575
//has some question...
#include <stdio.h>
#include <math.h>

int main(void){

    long long int center[2];
    long long int kingdom[2];
    long long int range;

    while(scanf("%lld %lld %lld %lld %lld", &center[0], &center[1], &kingdom[0], &kingdom[1], &range) != EOF){
        if (range < (abs(center[0] - kingdom[0]) + abs(center[1] - kingdom[1]))){
            printf("alive\n");
        }
        else{
            printf("die\n");
        }
    }
    
    return 0;
}
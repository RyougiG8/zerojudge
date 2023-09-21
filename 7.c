//c657
#include <stdio.h>
#include <string.h>

int main(void){
    char s[1000];
    int count, temp, length;
    char buffer, ans;

    while (scanf("%s", s) != EOF){
        count = 0; 
        temp = 0;
        buffer = s[0];
        ans = ' ';
        length = strlen(s);

        for (int i = 0; i < length; i++){
            if(buffer != s[i]){
                count = 0;
                count++;
                buffer = s[i];
            }
            else{
                count++;
                if (count > temp){
                    temp = count;
                    ans = buffer;
                }
            }
        } 
        
        printf("%c %d\n", ans, temp);
    }

    return 0; 
}

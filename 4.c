//a779
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LENTGH 1000

int main(void){
    char *s = (char*)malloc(MAX_LENTGH * sizeof(char));
    char *ans = (char*)malloc(MAX_LENTGH * sizeof(char));
    int count, flag, s_length, ans_length;
    
    while (scanf("%[^\n]", s) != EOF){
        getchar();
        flag = 1;
        ans_length = 0;
        count = 0;

        s_length = strlen(s);

        for (int i = 0; i < s_length; i++){
                if((65 <= s[i] && s[i] <= 90) || (97 <= s[i] && s[i] <= 122) || (48 <= s[i] && s[i] <= 57)){
                        if((65 <= s[i] && s[i] <= 90)){
                            ans[ans_length++] = s[i] + 32;
                        }
                        else{
                            ans[ans_length++] = s[i];
                        }
                    }
                }

        count = ans_length;

        for (int j = 0; j < count / 2; j++){
                if (ans[j] != ans[ans_length - j - 1]){
                    flag = 0;
                    break;
                }
                else{
                    flag = 1;
                }
            }

        if(flag){
                printf("%s\n", s);
                printf("-- is a palindrome\n");
            }        
        else{
                printf("%s\n", s);
                printf("-- is not a palindrome\n");
            }        
    }
    
    free(ans);
    free(s);

    return 0;
}
//a982
#include <stdio.h>
#define MAX_N 100

int maze[MAX_N][MAX_N];

void maze_path(int i, int j, int n){
    if(i == n - 2 && j == n - 2){
        return;
    }

    if (maze[i][j] + 1 < maze[i][j + 1]){
        maze[i][j + 1] = maze[i][j] + 1;
        maze_path(i, j + 1, n);
    }

    if (maze[i][j] + 1 < maze[i + 1][j]){
        maze[i + 1][j] = maze[i][j] + 1;
        maze_path(i + 1, j, n);
    }

    if (maze[i][j] + 1 < maze[i - 1][j]){
        maze[i - 1][j] = maze[i][j] + 1;
        maze_path(i - 1, j, n);
    }

    if (maze[i][j] + 1 < maze[i][j - 1]){
        maze[i][j - 1] = maze[i][j] + 1;
        maze_path(i, j - 1, n);
    }
}

int main(){
    int n;
    while(scanf("%d", &n) != EOF){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(getchar() == '.'){
                    maze[i][j] = 999999;
                }
                else {
                    maze[i][j] = 0;
                }
            }
            getchar();
        }
        
        
        maze[1][1] = 1;
        maze_path(1, 1, n);

        if(maze[n - 2][n - 2] == 999999  || maze[n - 2][n - 2] == 0){
            printf("No solution!\n");
        }
        else{
            printf("%d\n", maze[n - 2][n - 2]);
        }
    }
    return 0;
}
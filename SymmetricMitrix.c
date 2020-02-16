#include <stdio.h>

int main()
{
    int N;
    while(scanf("%d", &N) == 1){
        int input[100][100];
        int flag = 1;
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                scanf("%d", &input[i][j]);
            }
        }
        for (int i = 0; i < N; i++){
            for (int j = 0; j < N; j++){
                if (input[i][j] == input[j][i])
                    flag = 1;
                else{
                    flag = 0;
                    i = N;
                    break;
                }
            }
        }
        if (flag == 1)
            printf("Yes!\n");
        else
            printf("No!\n");

    }
    return 0;
}

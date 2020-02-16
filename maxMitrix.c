#include <stdio.h>

int main()
{
    int input[4][5];
    while(scanf("%d", &input[0][0]) == 1){
        for (int i = 0; i < 4; i++){
            for (int j = 0; j < 5; j++){
                if(i == 0 && j == 0)
                    continue;
                else
                    scanf("%d", &input[i][j]);
            }
        }
        int output[2][5];
        for (int j = 0; j < 5; j++){
            int max1 = input[0][j];
            int max1_h = 0;
            for(int i = 0; i < 4; i++){
                if(input[i][j] > max1){
                    max1 = input[i][j];
                    max1_h = i;
                }
            }
            int max2;
            int max2_h;
            for (int i = 0; i < 4; i++){
                if (i != max1_h){
                    max2 = input[i][j];
                    max2_h = i;
                }
            }
            for (int i = 0; i < 4; i++){
                if (i != max1_h && input[i][j] > max2 && input[i][j] <= max1){
                    max2 = input[i][j];
                    max2_h = i;
                }
            }
            if (max1_h <= max2_h){
                output[0][j] = max1;
                output[1][j] = max2;
            }else{
                output[0][j] = max2;
                output[1][j] = max1;
            }
        }
        for(int i = 0; i < 2; i++){
            for(int j = 0; j < 5; j++){
                printf("%d ", output[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

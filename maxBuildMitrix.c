#include <stdio.h>


int main()
{
    int m, n;
    while (scanf("%d %d", &m, &n) == 2){
        int input[m][n];
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                scanf("%d", &input[i][j]);
            }
        }
        //sum
        int sum[m];
        for (int i = 0; i < m; i++){
            sum[i] = 0;
            for (int j = 0; j < n; j++){
                sum[i] += input[i][j];
            }
        }
        //location
        int max[m];
        for (int i = 0; i < m; i++){
            max[i] = 0;
            for (int j = 1; j < n; j++){
                if (input[i][j] > input[i][max[i]])
                    max[i] = j;
            }
            //change
            input[i][max[i]] = sum[i];
        }
        //output
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                printf("%d ", input[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}

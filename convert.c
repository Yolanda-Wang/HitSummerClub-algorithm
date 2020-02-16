#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int a[100][100];
    while(scanf("%d", &n) == 1){
        int i;
        for (i = 1; i <= n; i++){
            int j;
            for(j = 1; j <= n; j++){
                scanf("%d", &a[i][j]);
            }
        }
        for(i = 1; i <= n; i++){
            int j;
            for (j = 1; j <= n; j++){
                printf("%d ", a[j][i]);
            }
            printf("\n");
        }
    }
    return 0;
}

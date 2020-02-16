#include <stdio.h>
#include <stdlib.h>
int a[11][5];
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    for(int i = 0; i < n; i++){
        scanf("%d %d %d %d", &a[i][0], &a[i][1], &a[i][2], &a[i][3]);
        a[i][4] = i+1;
    }
    for(int i = 0; i < m; i++){
        int b1, b2;
        int temp1, temp2, temp3, temp4, temp5;
        scanf("%d %d", &b1, &b2);
        int j;
        for(j = n-1; j >= 0; j--){
            if(b1 >= a[j][0] && b1 <= a[j][2] && b2 >= a[j][1] && b2 <= a[j][3]){
                printf("%d\n", a[j][4]);
                temp1 = a[j][0];
                temp2 = a[j][1];
                temp3 = a[j][2];
                temp4 = a[j][3];
                temp5 = a[j][4];
                for(int k = j; k < n-1; k++){
                    a[k][0] = a[k+1][0];
                    a[k][1] = a[k+1][1];
                    a[k][2] = a[k+1][2];
                    a[k][3] = a[k+1][3];
                    a[k][4] = a[k+1][4];
                }
                a[n-1][0] = temp1;
                a[n-1][1] = temp2;
                a[n-1][2] = temp3;
                a[n-1][3] = temp4;
                a[n-1][4] = temp5;
                break;
            }
        }
        if (j == -1)
            printf("IGNORED\n");
    }
    return 0;
}

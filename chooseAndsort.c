#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d", &n) == 1){
        int i;
        int a[n];
        for (i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        for(i = 0 ; i < n; i++){
            for (int j = i; j < n; j++){
                if (a[i] > a[j]){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        printf("%d\n", a[n-1]);
        if (n == 1)
            printf("-1");
        else{
            for (i = 0 ; i < n-1; i++){
                printf("%d ", a[i]);
            }
        }
        printf("\n");
    }
    return 0;
}

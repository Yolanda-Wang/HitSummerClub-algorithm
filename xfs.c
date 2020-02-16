#include <stdio.h>
#include <stdlib.h>
int a[501];
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    int count = 0;
    for (int i = 0; i < n; i++){
        if(a[i] > 0){
            for(int j = 0; j < n; j++){
                if(a[j] == 0 - a[i]){
                    count++;
                }
            }
        }
    }
    printf("%d\n", count);
    return 0;
}

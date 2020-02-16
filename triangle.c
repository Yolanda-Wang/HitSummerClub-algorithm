#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    for(int i = n; i > 0; i--){
        for(int j = n-i; j > 0; j--){
            printf(" ");
        }
        for(int k = 0; k < 2*i - 1; k++){
            printf("#");
        }
        for(int j = n-i; j > 0; j--){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}

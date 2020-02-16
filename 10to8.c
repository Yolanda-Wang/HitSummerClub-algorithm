#include <stdio.h>

int main()
{
    int N;
    while(scanf("%d", &N) == 1){
        char result[100] = "";
        int i = 0;
        int remain = N;
        while(remain != 0){
            result[i] = remain%8 + '0';
            i++;
            remain = remain/8;
        }
        for(--i; i >= 0; i--){
            printf("%c", result[i]);
        }
        printf("\n");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int count = 0;
    while(scanf("%d", &a) == 1 && scanf("%d", &b) == 1 && scanf("%d", &c) == 1){
        count++;
        if(a == 0 && b == 0 && c == 0){
            break;
        }
        printf("Case %d: %d", count, a/b);
        if (c != 0){
            printf(".");
            for (int i = 0; i < c; i++){
                a = a%b;
                a *= 10;
                int temp = a/b;
                if(i == c-1){
                    a = a%b;
                    a *= 10;
                    if (a/b > 5)
                        printf("%d", temp+1);
                    else
                        printf("%d", temp);
                }
                else
                    printf("%d", temp);
            }
        }
        printf("\n");
    }
    return 0;
}

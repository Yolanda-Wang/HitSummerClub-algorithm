#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    int count = 0;
    while(scanf("%d", &a) == 1){
            scanf("%d", &b);
            scanf("%d", &c);
            count++;
            for (int i = 10; i <= 100; i++){
                if(i%3 == a && i%5 == b && i%7 == c){
                    printf("Case %d: %d\n", count, i);
                    i = 101;
                }
                if (i == 100){
                    printf("Case %d: No answer\n", count);
                }
            }
    }
    return 0;
}

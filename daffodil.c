#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 100;
    int a;
    int b;
    int c;
    for (int i = num; i <= 999; i++){
        int temp = i;
        a = i / 100;
        c = i % 10;
        temp = i / 10;
        b = temp % 10;
        if (i == a*a*a + b*b*b + c*c*c){
            printf("%d\n", i);
        }
    }
    return 0;
}

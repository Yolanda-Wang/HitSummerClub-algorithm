#include <stdio.h>

int main()
{
    int n;
    while (scanf("%d", &n) == 1){
        int mul = n * n;
        //求n的位数
        int loc;
        if(n/10 == 0)
            loc = 1;
        else
            loc = 2;
        //对比
        int n_1 = n%10;
        int n_2 = n/10%10;
        int mul_1 = mul%10;
        int mul_2 = mul/10%10;
        if (loc == 1){
            if (n_1 == mul_1){
                printf("Yes!\n");
            }
            else
                printf("No!\n");
        }else if (loc == 2){
            if (n_1 == mul_1 && n_2 == mul_2){
                printf("Yes!\n");
            }else{
                printf("No!\n");
            }
        }
    }
    return 0;
}

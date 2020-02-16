#include <stdio.h>

int main()
{
    int n;
    while(scanf("%d", &n) == 1){
        int sum_y1 = 0;//奇数阶乘和
        int sum_y2 = 0;//偶数阶乘和
        for(int i = 1; i <= n; i++){
            //calculate i!
            int fac = 1;
            for (int j = 1; j <= i; j++){
                fac = fac * j;
            }
            if (i%2 == 0){
                sum_y2 += fac;
            }else{
                sum_y1 += fac;
            }
        }
        printf("%d %d\n", sum_y1, sum_y2);
    }
    return 0;
}

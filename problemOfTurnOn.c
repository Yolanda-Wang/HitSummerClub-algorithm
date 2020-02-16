/*
数组存储状态信息
memset对数组赋值（for循环也可以实现）
first:避免多余空格输出
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 10000
int a[max];
int main()
{
    int n, k, first = 1;
    memset(a, 0, sizeof(a));
    scanf("%d %d", &n, &k);
    for(int i = 1; i <= k; i++){
        for(int j = 1; j <= n; j++){
            if(j % i == 0){
                if(a[j] == 0)
                    a[j] = 1;
                else
                    a[j] = 0;
            }
        }
    }
    for(int k = 1; k <= n; k++){
        if(a[k] == 1)
        {
            if(first == 1)
                first = 0;
            else
                printf(" ");
            printf("%d", k);
        }
    }
    return 0;
}

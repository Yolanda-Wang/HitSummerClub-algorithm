/*
%nd的使用，n表示该数字占的位数，有助于对齐
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 9
int a[max][max];
int main()
{
    int n;
    int num = 1;
    memset(a, 0, sizeof(a));
    scanf("%d", &n);
    int i = 0, j = n-1;
    while (num <= n*n){
        while(i < n && a[i][j] == 0){
            a[i][j] = num;
            num++;
            i++;
//            printf("%d %d\n", num, a[i-1][j]);
        }
        i--;
        j--;
        while(j >= 0 && a[i][j] == 0){
            a[i][j] = num;
            num++;
            j--;
 //           printf("%d %d\n", num, a[i][j+1]);
        }
        j++;
        i--;
        while(i >= 0 && a[i][j] == 0){
            a[i][j] = num;
            num ++;
            i--;
 //           printf("%d %d\n", num, a[i-1][j]);
        }
        i++;
        j++;
        while(j < n && a[i][j] == 0){
            a[i][j] = num;
            num++;
            j++;
 //           printf("%d %d\n", num, a[i][j-1]);
        }
        j--;
        i++;
    }
    for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                printf("%3d ", a[i][j]);
            }
            printf("\n");
    }
    return 0;
}

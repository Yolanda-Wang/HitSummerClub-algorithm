#include <stdio.h>

int solutions(int n){
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    return solutions(n-1) + solutions(n-2);
}

int main()
{
    int N;
    while(scanf("%d", &N) == 1){
        int result = solutions(N);
        printf("%d\n", result);
    }
    return 0;
}

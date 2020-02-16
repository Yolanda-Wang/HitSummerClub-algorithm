#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int count = 0;
    while(scanf("%d", &n) == 1 && scanf("%d", &m) == 1){
        if (n == 0 && m == 0)
        {
            break;
        }
        double sum = 0.0;
        count++;
        for (long long i = n; i <= m; i++){
            sum += (double)1.0/(i*i);
        }
        printf("Case %d: %.5f\n", count, sum);
    }
    return 0;
}

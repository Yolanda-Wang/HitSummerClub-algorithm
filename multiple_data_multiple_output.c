#include <stdio.h>
#define INF 100000000
int main()
{
    int n;
    int max = -INF;
    int min = INF;
    double avg;
    int sum = 0;
    int count = 0;
    while(scanf("%d", &n) == 1 && n != 0){
        int x = n;
        count++;
        sum = 0;
        max = -INF;
        min = INF;
        for (int i = 0; i < x; i++){
            scanf("%d", &n);
            sum += n;
            if(n > max) max = n;
            if(n < min) min = n;
        }
        avg = (double)sum / x;
        printf("Case %d: %d %d %.3f\n\n", count, min, max, avg);

    }
    return 0;
}


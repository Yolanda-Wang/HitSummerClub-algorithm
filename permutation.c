/*
key：a+b+c+d+e+f+g+h+i == 45 && a*b*c*d*e*f*g*h*i == 362880
abc的最大值和最小值的确定：123， 987/3
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int abc, def, ghi;
    int a, b, c, d, e, f, g, h ,i;
    for(abc = 123; abc <= 329; abc++){
        def = abc * 2;
        ghi = abc * 3;
        int a, b, c, d, e, f, g, h ,i;
        a = abc / 100;
        b = abc / 10 % 10;
        c = abc % 10;

        d = def / 100;
        e = def / 10 % 10;
        f = def % 10;

        g = ghi / 100;
        h = ghi / 10 % 10;
        i = ghi % 10;
        if (a+b+c+d+e+f+g+h+i == 45 && a*b*c*d*e*f*g*h*i == 362880){
            printf("%d %d %d\n", abc, 2*abc, 3*abc);
        }
    }
    return 0;
}

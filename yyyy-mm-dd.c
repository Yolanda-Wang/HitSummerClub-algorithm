#include <stdio.h>

int main()
{
    int y, n;
    while(scanf("%d %d", &y, &n) == 2){
        int flag = 0; //»ÚƒÍ±Í÷æ
        if (y%100 != 0 && y%4 == 0)
            flag = 1;
        else if (y%400 == 0)
            flag = 1;
        else
            flag = 0;
        int m = 1; //month
        int d = n; //day
        if (n/32 != 0){
            m++;
            d = n-31;
            if ((flag == 1 && d/30 != 0)|| (flag == 0 && d/29 != 0)){
                m++;
                if (flag == 1)
                    d = d - 29;
                else
                    d = d - 28;
                if(d/32 != 0){//3
                    m++;
                    d = d-31;
                    if (d/31 != 0){//4
                        m++;
                        d = d-30;
                        if (d/32 != 0){//5
                            m++;
                            d = d-31;
                            if (d/31 != 0){//6
                                m++;
                                d = d-30;
                                if (d/32 != 0){//7
                                    m++;
                                    d = d-31;
                                    if (d/32 != 0){//8
                                        m++;
                                        d = d -31;
                                        if (d/31 != 0){//9
                                            m++;
                                            d = d - 30;
                                            if (d/32 != 0){//10
                                                m++;
                                                d = d - 31;
                                                if (d/31 != 0){//11
                                                    m++;
                                                    d = d - 30;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        printf("%d-", y);
        if (m/10 == 0)
            printf("0");
        printf("%d-", m);
        if (d/10 == 0)
            printf("0");
        printf("%d\n", d);
    }
    return 0;
}

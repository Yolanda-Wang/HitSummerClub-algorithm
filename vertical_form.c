/*
%nd解决添加空格的问题
sprintf输出到字符串：sprintf(temp, "%d%d%d%d%d", abc, de, t1, t2, abc*de);
strchr：在字符串 中查找单个字符
strlen：实际长度，不包括字符串结尾的\0
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int abc, de;
    char s[20], temp[99];
    scanf("%s", s);
    int t1, t2;
    int count = 0;
    for (int abc = 111; abc <= 999; abc++){
        for (int de = 11; de <= 99; de++){
            t1 = abc * (de % 10);
            t2 = abc * (de / 10);
            sprintf(temp, "%d%d%d%d%d", abc, de, t1, t2, abc*de);
            int i = 0;
            for(i = 0; i < strlen(temp); i++){
                if(strchr(s, temp[i]) == NULL)
                    break;
            }
            if(i == strlen(temp)){
                count++;
                printf("<%d>\n", count);
                printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, t1, t2, abc*de);
            }
        }
    }
    printf("The number of solutions = %d\n", count);
    return 0;
}

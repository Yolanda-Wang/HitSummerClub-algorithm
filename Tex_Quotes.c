/*
单个字符的读入，最好不使用scanf：getchar - > fgetc(fin)
字符串的读入fgets(buf, max,fin),char buf[max]
字符串输出用双引号，单个字符用单引号
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    int q = 1; //表明是左还是右边
    while((c = getchar()) != EOF ){
        if(c == '"' && q == 1){
            printf("%s","``");
            q = 0;
        }
        else if (c == '"' && q == 0){
            printf("%s", "‘‘");
            q = 1;
        }
        else
            printf("%C", c);
    }
    return 0;
}

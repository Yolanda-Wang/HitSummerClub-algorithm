/*
注意‘\'需要在其前面加上\组成’\\'才能正常输出
*/
#include <stdio.h>
#include <stdlib.h>
char s[] = "`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
int main()
{
    int c;
    while((c = getchar()) != EOF){
        for (int i = 1; i <= sizeof(s); i++){
            if(s[i] == c && s[i])
                c = s[i-1];
        }
        printf("%c", c);
    }
    return 0;
}

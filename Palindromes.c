#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char tem[] = "A   3  HIL JM O   2TUVWXY51SE Z  8 ";
int main()
{
    int palin = 0;
    int rever = 0;
    char s[10000];
    while(scanf("%s", s) == 1)
    {
        palin = 0;
        rever = 0;
        char t[10000];
        int i;
        //¾µÏñ´®
        for (i = 0; i < strlen(s); i++){
            if(s[i] <= 'Z' && s[i] >= 'A')
                t[i] = tem[s[i] - 'A'];
            else
                t[i] = tem['Z' - 'A' + s[i] - '0'];
        }
        //ÅÐ¶ÏÊÇ·ñÎª»ØÎÄ´®
        for (i = 0; i < strlen(s); i++){
            if(s[i] != s[strlen(s)-i-1]){
                break;
            }
        }
        if (i == strlen(s))
            palin = 1;
        //ÅÐ¶ÏÊÇ·ñÎª¾µÏñ´®
        for (i = 0; i < strlen(t); i++){
            if(s[i] != t[strlen(s)-i-1]){
                break;
            }
        }
        if (i == strlen(s))
            rever = 1;

        if (palin && rever)
            printf("%s -- is a mirrored palindrome\n", s);
        else if (palin && !rever)
            printf("%s -- is a regular palindrome\n", s);
        else if (!palin && rever)
            printf("%s -- is a mirrored string\n", s);
        else
            printf("%s -- is not a palindrome\n", s);

    }
    return 0;
}

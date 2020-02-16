#include <stdio.h>
#include <string.h>

int main()
{
    char input[1000];
    while(scanf("%s", input) == 1)
    {
        int len = strlen(input);
        int i;
        for(i = 0; i < len/2; i++)
        {
            if(input[i] != input[len-1-i])
                break;
        }
        if(i != len/2)
            printf("No!\n");
        else
            printf("Yes!\n");
    }
    return 0;
}

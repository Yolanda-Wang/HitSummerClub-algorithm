#include <stdio.h>
#include <string.h>

int main()
{
    int word_count = 0;
    char words[100];

    while(scanf("%s", &words) == 1){
        if(words[strlen(words) - 1] == '.'){
            printf("%d\n", strlen(words)-1);
        }else{
            printf("%d ", strlen(words));
        }
    }
    return 0;
}

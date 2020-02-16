#include <stdio.h>
#include <string.h>

int main()
{
    char a[1000];
    char b[1000];
    char result[1001];
    while (scanf("%s", a) == 1){
        scanf("%s", b);
        int len_a = strlen(a);
        int len_b = strlen(b);
        int min_len = len_a >= len_b? len_b : len_a;
        int max_len = len_a >= len_b? len_a : len_b;
        int i;
        int add = 0;
        for (i = 0; i < min_len; i++){
            int temp = a[len_a-1 - i] - '0' + b[len_b-1 - i] - '0' + add;
            result[max_len - i] = temp%10 + '0';
            add = temp/10;
        }
        char *max;
        char *min;
        if(len_a > len_b){
            max = a;
            min = b;
        }else{
            max = b;
            min = a;
        }
        for (int j = min_len; j < max_len; j++){
            int temp = add + max[max_len-1 - j] - '0';
            result[max_len - j] = temp % 10 + '0';
            add = temp/10;
        }
        if (add != 0){
            result[0] = add + '0';
            printf("%s\n", result);
        }else{
            for(int k = 1; k <= max_len; k++){
                if (result[k] >= '0' && result[k] <= '9')
                    printf("%c", result[k]);
            }
            printf("\n");
        }
    }
    return 0;
}

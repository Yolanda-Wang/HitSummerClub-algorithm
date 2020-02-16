#include <stdio.h>
#include <string.h>
const int MAX = 14;

int main()
{
    char a[MAX];
    char b[MAX];
    while (scanf("%s %s", a, b) == 2){
        long long new_a = 0;
        int flag_a = 0;
        if (a[0] == '-')
            flag_a = 1;
        for (int i = 0; i < strlen(a); i++){
            if (a[i] == ',' || a[i] == '-')
                continue;
            else {
                new_a = new_a * 10 + a[i] - '0';
            }
        }
        if (flag_a == 1)
            new_a = new_a * -1;
        //exchange b
        long long new_b = 0;
        int flag_b = 0;
        if (b[0] == '-')
            flag_b = 1;
        for (int i = 0; i < strlen(b); i++){
            if (b[i] == ',' || b[i] == '-')
                continue;
            else {
                new_b = new_b * 10 + b[i] - '0';
            }
        }
        if (flag_b == 1)
            new_b = new_b * -1;
        //add
        int output = new_a + new_b;
        printf("%d\n", output);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    while (scanf("%s", input) == 1){
        int output_ten = 0;
        int t_ten = 1;
        for (int i = strlen(input)-1; i >= 0; i--){
            int in;
            if (input[i] == 'a')
                in = 10;
            else if (input[i] == 'b')
                in = 11;
            else
                in = input[i] - '0';
            output_ten += t_ten * in;
            t_ten *= 12;
        }
        printf("%d\n", output_ten);
        char output_two[1000];
        int count = 0;
        int remain = output_ten;
        while(remain != 0){
            output_two[count] = remain % 2 + '0';
            remain = remain/2;
            count++;
        }
        int plus = count%8;
        if (plus != 0){
            for (int i = 0; i < 8 - plus; i++){
                output_two[count] = '0';
                count++;
            }
        }
        int eight = 0;
        for (int i = count-1; i >= 0; i--){
            printf("%c", output_two[i]);
            eight++;
            if(eight == 8){
                printf(" ");
                eight = 0;
            }
        }
        printf("\n");
    }
    return 0;
}

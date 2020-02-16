#include <stdio.h>
#include <string.h>

int main()
{
    char input[1000];
    while(scanf("%s", input) == 1){
        for (int i = 0; i < strlen(input); i++){
            int input_ten = (int)input[i];
            char input_two[8] = {'0'};
            int count = 7;
            int remain = input_ten;
            for(int i = 0; i < 8; i++){
                input_two[i] = '0';
            }
            while(remain != 0){
                input_two[count] = remain%2 + '0';
                remain = remain/2;
                count--;
            }
            char output_two[8];
            for(int i = 0; i < 8; i++){
                if(i == 2 || i == 4 || i == 6){
                    output_two[i] = input_two[i+1];
                }else if(i == 3 || i == 5 || i == 7){
                    output_two[i] = input_two[i-1];
                }else
                    output_two[i] = input_two[i];
            }
            int shift = 0;
            int mul = 2;
            for (int i = 0; i <= 1; i++){
                shift += mul * (input_two[i] - '0');
                mul = mul/2;
            }
            //shift
            while(shift){
                char temp = output_two[2];
                for (int i = 2; i < 8; i++){
                    if(i == 7){
                        output_two[i] = temp;
                    }else{
                        output_two[i] = output_two[i+1];
                    }
                }
                shift--;
            }
            //calculate
            mul = 1;
            int output_ten = 0;
            for(int i = 7; i >= 0; i--){
                output_ten += (output_two[i] - '0') * mul;
                mul *= 2;
            }
            char output_char = output_ten;
            printf("%c", output_char);
        }
        printf("\n");
    }
    return 0;
}

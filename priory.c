/*
这一题里面将数字和字母统一看成是char类型的，
所以数字3实际存储时为ASCII码中的‘3’，其十进制表示是51，
转化为二进制表示就是0110011，取最高位为奇校验位，校验位为1，
所以校验后的二进制数为10110011，字母同理。
故本题只需将输入的字符减去‘\0’得到字符的十进制表示，再将其转化为七位二进制数加上一位校验位输出即可。
*/
#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    int output[8] = {0};
    while(scanf("%s", input) == 1){
        int len = strlen(input);
        for (int i = 0; i < len; i++){
            //input[i]
            int temp = input[i];
            int count = 0;
            int j = 0;
            while(temp != 0){
                output[j] = temp % 2;
                if (output[j] == 1)
                    count++;
                temp = temp/2;
                j++;
            }
            if(count % 2 == 1){
                output[7] = 0;
                for(int k = 7; k >= 0; k--){
                    printf("%d", output[k]);
                }
            }else{
                output[7] = 1;
                for(int k = 7; k >= 0; k--){
                    printf("%d", output[k]);
                }
            }
            printf("\n");
            for(int i = 0; i < 8; i++){
                output[i] = 0;
            }
        }
    }
    return 0;
}

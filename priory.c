/*
��һ�����潫���ֺ���ĸͳһ������char���͵ģ�
��������3ʵ�ʴ洢ʱΪASCII���еġ�3������ʮ���Ʊ�ʾ��51��
ת��Ϊ�����Ʊ�ʾ����0110011��ȡ���λΪ��У��λ��У��λΪ1��
����У���Ķ�������Ϊ10110011����ĸͬ��
�ʱ���ֻ�轫������ַ���ȥ��\0���õ��ַ���ʮ���Ʊ�ʾ���ٽ���ת��Ϊ��λ������������һλУ��λ������ɡ�
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

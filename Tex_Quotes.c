/*
�����ַ��Ķ��룬��ò�ʹ��scanf��getchar - > fgetc(fin)
�ַ����Ķ���fgets(buf, max,fin),char buf[max]
�ַ��������˫���ţ������ַ��õ�����
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c;
    int q = 1; //�����������ұ�
    while((c = getchar()) != EOF ){
        if(c == '"' && q == 1){
            printf("%s","``");
            q = 0;
        }
        else if (c == '"' && q == 0){
            printf("%s", "����");
            q = 1;
        }
        else
            printf("%C", c);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char input[8] = {'2', '3', '4', '5', '6', '7', '8', '9'};
    int n[3];
    scanf("%d %d %d", &n[0], &n[1], &n[2]);
    int k;
    for(k = 0; k < 3; k++){
        //ÇÐÅÆ
        char temp[8];
        int count = 0;
        for(int i = n[k]; i < 8; i++){
            temp[count++] = input[i];
        }
        for(int i = 0; i < n[k]; i++){
            temp[count++] = input[i];
        }
        //Ï´ÅÆ
        count = 0;
        int m = 0;
        for(int i = 0; i < 8; i++){
            input[i++] = temp[m++];
        }
        int t = 4;
        for(int i = 1; i < 8; i++){
            input[i++] = temp[t++];
        }
        printf("round %d:%s\n", k+1, input);
//        for(int i = 0; i < 8; i++){
//            if (i == 0)
//                printf("round %d:", n[k]);
//            printf("%c", input[i]);
//        }
    }
    return 0;
}

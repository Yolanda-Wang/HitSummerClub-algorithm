#include <stdio.h>
#include <string.h>

int main()
{
    char ip[50];
    while(scanf("%s", &ip) == 1){
        int len = strlen(ip);
        int i;
        int flag = 1;//true
        int j = 0;
        int count = 0;//.µÄ¸öÊý
        for (i = 0; i < len; i++){
            char temp[20];
            if(ip[i] != '.'){
                temp[j] = ip[i];
                j++;
            }
            if(ip[i] == '.' || i == len-1){
//                for (int k = 0; k < j; k++){
//                    printf("%c ", temp[k]);
//                }
                count++;
                if (temp [0] == '-'){
                    flag = 0;
                    //printf("NO1!\n");
                    break;
                }
                if (j == 3){
                    if (temp[0] > '2'){
                        flag = 0;
                        //printf("NO2!\n");
                        break;
                    }else if (temp[0] == '2' && temp[1] > '5'){
                        flag = 0;
                        //printf("NO3!\n");
                        break;
                    }else if (temp[0] == '2' && temp[1] == '5' && temp[2] > '5'){
                        flag = 0;
                        //printf("NO4!\n");
                        break;
                    }
                }else if (j == 0){
                    flag = 0;
                    //printf("NO5!\n");
                    break;
                }else{
                    flag = 1;
                }
                j = 0;
            }
        }
        if (flag == 1 && count-1 == 3)
            printf("Yes!\n");
        else
            printf("No!\n");
    }
    return 0;
}

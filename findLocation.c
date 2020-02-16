#include <stdio.h>
#include <string.h>

int main()
{
    char input[100];
    while(scanf("%s", input) == 1){
        char temp[100] = "";
        int m = 0;
        //reshape
        for (int i = 0; i < strlen(input); i++){
            int k;
            for (k = 0; k < m; k++){
                if(temp[k] == input[i]){
                    break;
                }
            }
            if (k == m){
                temp[m] = input[i];
                m++;
            }
            else
                continue;
            for (int j = i+1; j < strlen(input); j++){
                if (input[i] == input[j]){
                    temp[m] = input[i];
                    m++;
                }
            }
        }
        //find
        for (int i = 0; i < strlen(temp); i++){
            if (temp[i] == temp[i+1]){
                int count = 0;
                for (int k = 0; k < strlen(input); k++){
                    if (input[k] == temp[i] && count != 0){
                        printf(",%c:%d", input[k], k);
                        count++;
                    }
                    else if (input[k] == temp[i] && count == 0){
                        printf("%c:%d", input[k], k);
                        count++;
                    }

                }
                printf("\n");
                while(temp[i] == temp[i+1])
                    i++;
            }
        }
//            for(int i = 0; i < strlen(input); i++){
//                //±éÀútemp
//                for (int k = 0; k < strlen(temp); k++){
//                    if (input[i] == temp[k] && temp[k] == temp[k+1]){
//                        int count = 0;
//                        for (int m = 0; m < strlen(input); m++){
//                            if (input[k] == temp[i] && count != 0){
//                            printf(",%c:%d", input[k], k);
//                            count++;
//                        }
//                        else if (input[k] == temp[i] && count == 0)
//                        {
//                            printf("%c:%d", input[k], k);
//                            count++;
//                        }
//                        while(temp[k] == temp[k+1]){
//                            temp[k] == '-';
//                            k++;
//                        }
//                        temp[k] = '-';
//                    }
//                    printf("\n");
//                    break;
//                    }
//                }
//            }
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main()
{
    char sentence[1000];
    while(gets(sentence) != NULL){
        int num_abc = 0;
        int num_words = 1;
        int max_abc[1000];
        max_abc[0] = sentence[0];
        int max_num = 1;
        int num = 0;
        for (int i = 0; i < strlen(sentence); i++){
            if ((sentence[i] >= 'a' && sentence[i] <= 'z') || (sentence[i] >= 'A' && sentence[i] <= 'Z')){
                num_abc++;
            }
            if (sentence[i+1] != ' ' && sentence[i] == ' '){
                num_words++;
                while(sentence[i+1] == ' '){
                    i++;
                }
            }
            int count = 1;
            for (int j = 0; j < strlen(sentence); j++){
                if (sentence[i] == sentence[j] && i != j && sentence[i] != ' ' && sentence[j] != ' '){
                    count++;
                }
            }
            if (count > max_num){
                num = 0;
                max_num = count;
                max_abc[num] = sentence[i];
                num++;
            }else if (count == max_num){
                int m;
                for (m = 0; m < num; m++){
                    if(max_abc[m] == sentence[i])
                        break;
                }
                if (m == num){
                    max_abc[num] = sentence[i];
                    num++;
                }
            }
        }
        if (sentence[strlen(sentence) - 1] == ' ')
            num_words--;
        printf("%d %d ", num_abc, num_words);
        for (int m = 0; m < num; m++){
            printf("%c ", max_abc[m]);
        }
        printf("%d\n", max_num);

    }
    return 0;
}

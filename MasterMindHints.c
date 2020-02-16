#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int std[10000], guess[10000];
    int count = 0;
    while(scanf("%d", &n) == 1 && n != 0){
        count++;
        for (int i = 0; i < n; i++){
            scanf("%d", &std[i]);
        }
        int a, b;
        printf("Case %d:\n", count);
        while(1){
            for(int i = 0; i < n; i++){
                scanf("%d", &guess[i]);
            }
            int k;
            for(k = 0; k < n; k++){
                if(guess[k] != 0)
                    break;
            }
            if (k == n)
                break;
            a = 0;
            int temp[10000];
            int tem = 0;
            for (int i = 0; i < n; i++){
                if(std[i] == guess[i])
                    a++;
                for(int j = 0; j < n; j++){
                    if(guess[j] == std[i] && i != j){
                        temp[tem] = std[i];
                        tem++;
                        break;
                    }
                }
            }

//            int temp[10000];
//            int tem = 0;
//            for(int i = 0; i < n; i++){
//                for(int j = 0; j < n; j++){
//                    if(std[i] == guess[j]){
//                        temp[tem] = std[i];
//                        tem++;
//                        break;
//                    }
//                }
//            }
            int j;
            b = 0;
            for(int i = 0; i < tem; i++){
                for(j = i+1; j < tem; j++){
                    if(temp[i] == temp[j])
                        break;
                }
                if(j == tem)
                    b++;
            }
            printf("(%d,%d)\n", a, b);
        }
    }
    return 0;
}

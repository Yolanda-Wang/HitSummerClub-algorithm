#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
struct BigInt{
    char data[1000];
};

int main()
{
    int N;
    while(scanf("%d", &N) == 1){
        BigInt a[1000];
        int len[100];
        for (int i = 0; i < N; i++){
            scanf("%s", a[i].data);
            len[i] = strlen(a[i].data);
        }
        for (int i = 0; i < N; i++){
            for (int j = i; j < N; j++){
                if (len[j] < len[i]){
                    BigInt temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }else if (len[i] == len[j]){
                    for (int k = 0; k < len[i]; k++){
                        if (a[i].data[k] > a[j].data[k]){
                            BigInt temp = a[i];
                            a[i] = a[j];
                            a[j] = temp;
                            break;
                        }else
                            continue;
                    }
                }else
                    continue;
            }
        }
        for (int i = 0; i < N; i++){
            printf("%s\n", a[i].data);
        }
    }
    return 0;
}

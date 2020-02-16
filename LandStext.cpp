#include <iostream>
#include <stdio.h>
#include <string.h>
using namespace std;
struct Text
{
    char word[100];
    int len;
};

int main()
{
    Text text[1000];
    int i = 0;
    while(gets(text[i].word) != NULL)
    {
        if (strlen(text[i].word) == 0)
            break;
        text[i].len = strlen(text[i].word);
        i++;
    }
    //sort
    for (int j = 0; j < i; j++)
    {
        for (int k = j; k < i; k++)
        {
            if (text[j].len > text[k].len)
            {
                Text temp = text[j];
                text[j] = text[k];
                text[k] = temp;
            }
        }
    }
    int j = 0;
    if (text[j].len == text[j+1].len)
    {
        while(text[j].len == text[j+1].len)
        {
            for (int k = 0; k < text[j].len; k++){
                cout << text[j].word[k];
            }
            printf("\n");
            j++;
        }
        for (int k = 0; k < text[j].len; k++){
                cout << text[j].word[k];
            }
            printf("\n");
//        printf("%s\n", text[j+1].word);
    }else{
        for (int k = 0; k < text[0].len; k++){
                cout << text[0].word[k];
            }
            printf("\n");
    }

    j = i-1;
    if (text[j].len == text[j-1].len)
    {
        while(text[j].len == text[j-1].len)
        {
            for (int k = 0; k < text[j].len; k++){
                cout << text[j].word[k];
            }
            printf("\n");
            j--;
        }
        for (int k = 0; k < text[j].len; k++){
                cout << text[j].word[k];
            }
            printf("\n");
//        printf("%s\n", text[j+1].word);
    }else{
        for (int k = 0; k < text[i-1].len; k++){
                cout << text[i-1].word[k];
            }
            printf("\n");
    }
    return 0;
}

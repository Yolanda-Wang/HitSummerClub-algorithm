#include <iostream>
#include <stdio.h>
using namespace std;

struct Link{
    int data;
    Link *next;
};

Link *createLink(int a[], int n){
    //sort
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            if(a[i] > a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    //insert
    Link *first = new Link;
    Link *last = first;
    for(int i = 0; i < n; i++){
        Link *next = new Link;
        next->data = a[i];
        last->next = next;
        last = next;
    }
}

int main()
{
    int n;
    while(scanf("%d", &n) == 1){
        int a[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }
        //sort
        for(int i = 0; i < n; i++){
            for(int j = i; j < n; j++){
                if(a[i] > a[j]){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
        //creatLink
        Link *first = new Link;
        Link *last = first;
        for(int i = 0; i < n; i++){
            Link *next = new Link;
            next->data = a[i];
            next->next = NULL;
            last->next = next;
            last = next;
        }
        //print
        Link *link = first->next;
        while(link->next != NULL){
            printf("%d ", link->data);
            link = link->next;
        }
        printf("%d", link->data);
        printf("\n");
    }
    return 0;
}

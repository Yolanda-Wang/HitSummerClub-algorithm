#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
struct Staff{
    int ID;
    char name[100];
    int age;
};

int main()
{
    int N;
    while(scanf("%d", &N) == 1){
        Staff staffs[30];
        for (int i = 0; i < N; i++){
            scanf("%d %s %d", &staffs[i].ID, &staffs[i].name, &staffs[i].age);
        }
        for (int i = 0; i < N; i++){
            for (int j = i; j < N; j++){
                if (staffs[j].age < staffs[i].age){
                    Staff temp = staffs[i];
                    staffs[i] = staffs[j];
                    staffs[j] = temp;
                }else if (staffs[j].age == staffs[i].age && staffs[j].ID < staffs[i].ID){
                    Staff temp = staffs[i];
                    staffs[i] = staffs[j];
                    staffs[j] = temp;
                }else if (staffs[j].age == staffs[i].age && staffs[j].ID == staffs[i].ID && strcmp(staffs[j].name, staffs[i].name) < 0){
                    Staff temp = staffs[i];
                    staffs[i] = staffs[j];
                    staffs[j] = temp;
                }
            }
        }
        for (int i = 0; i < 3; i++){
            printf("%d %s %d\n", staffs[i].ID, staffs[i].name, staffs[i].age);
        }
    }
    return 0;
}

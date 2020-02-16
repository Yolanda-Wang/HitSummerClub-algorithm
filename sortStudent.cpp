#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;

struct Student{
    char name[100];
    int age;
    int grade;
};

bool cmp(Student a, Student b){
    if (a.grade != b.grade)
        return a.grade < b.grade;
    else if (strcmp(a.name, b.name) != 0)
        return strcmp(a.name, b.name) < 0;
    else {
        return a.age < b.age;
    }
}
int main()
{
    int n;
    while(scanf("%d", &n) == 1){
        Student stu_list[1000];
        for (int i = 0; i < n; i++){
            scanf("%s %d %d", &stu_list[i].name, &stu_list[i].age, &stu_list[i].grade);
        }
        sort(stu_list, stu_list+n, cmp);
        for (int i = 0; i < n; i++){
            printf("%s %d %d\n", stu_list[i].name, stu_list[i].age, stu_list[i].grade);
        }
    }
    return 0;
}

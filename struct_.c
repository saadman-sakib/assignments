#include<stdio.h>

struct person
{
    char name[30];
    int day;
    char month[10];
    int year;
    float salary;
};


int main()
{
    struct person p1;
    printf("name: ");
    gets(p1.name);
    printf("day: ");
    scanf("%d", &p1.day);
    printf("month: ");
    scanf("%s", p1.month);
    printf("year: ");
    scanf("%d", &p1.year);
    printf("salary: ");
    scanf("%f", &p1.salary);
    printf("\n\n\n");


    printf("name: %s\n",p1.name);
    printf("day: %d\n",p1.day);
    printf("month: %s\n",p1.month);
    printf("year: %d\n",p1.year);
    printf("salary: %.2f\n",p1.salary);
    return 0;
}

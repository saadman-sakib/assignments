#include<stdio.h>

struct Student
{
    int marks[5];
};


void change(struct Student *a,struct Student *b)
{
    struct Student temp = *b;
    *b = *a;
    *a = temp;
}

void printm(struct Student *a)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", &(*a).marks[i]);
    }
    printf("\n");
}


void print(struct Student a){
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a.marks[i]);
    }
    printf("\n");
}



int main()
{
    struct Student saadman = {{10,20,30,40,50}};
    struct Student ikmam =  saadman;

    saadman.marks[4] = 49;

    printm(&saadman);
    printm(&ikmam);
    print(saadman);
    print(ikmam);

    change(&saadman,&ikmam);

    printm(&saadman);
    printm(&ikmam);
    print(saadman);
    print(ikmam);

    return 0;
}

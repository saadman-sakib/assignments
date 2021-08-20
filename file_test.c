#include<stdio.h>
int main()
{
    FILE *fp;
    int roll, number;
    char name[10];
    char letter;

    fp = fopen("names.csv", "w");
    fprintf(fp,"roll,name,number\n");
    for (int i = 0; i < 5; i++) {
        fscanf(stdin,"%d %s %d", &roll, name, &number);
        fprintf(fp,"%d %s %d\n", roll, name, number);
    }
    fclose(fp);
    
    printf("\n");

    fp = fopen("names.csv", "r");
    while (letter != EOF) {
        letter = getc(fp);
        if (letter == ',')
            printf(" ");
        else
            printf("%c", letter);
    }
}  
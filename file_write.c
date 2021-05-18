#include<stdio.h>
// #include<file.h>

int main()
{
    FILE *fp;

    // fp = fopen("aaa.dat", "w");

    // putc('c',fp);
    // putw(1,fp);

    // fclose(fp);

    // fp = fopen("aaa.dat", "r");

    // printf("%c ",getc(fp));
    // printf("%d",getw(fp));

    // fclose(fp);



    int a;
    char c;
    char s[10];

    fp = fopen("aaa", "w");
    fscanf(stdin,"%d %c %s", &a, &c, s);
    fprintf(fp,"%d %c %s", a, c, s);

    printf("\n");

    fp = fopen("aaa", "R");
    fscanf(fp,"%d %c %s", &a, &c, s);
    fprintf(stdout,"%d %c %s", a, c, s);

}
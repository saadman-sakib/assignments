//getchar requirs enter key to stop
//getch never stops unless terminated
//gets takes inp
#include<stdio.h>
#include<string.h>
int main()
{
    char ch;
    char string1[4];
    ch = getchar();
    gets(string1);
    putchar(ch);
    putchar('\n');
    puts(string1);
    printf("\n%s", string1);
}

#include<stdio.h>



int main()
{
    
    // scanf("%[^\n]%*c", str); 

    char x;
    char y[20];
    scanf("%c", &x);
    getchar();
    gets(y);

    printf("%c %s",x,y);
    return 0;
}

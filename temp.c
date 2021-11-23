#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int main()
{   
    char a[] = "Narayangonj";
    char b[] = "Dhaka";
    strncpy(b,a,3);
    printf("%s\n",b);
}
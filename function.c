#include <stdio.h>
int x=6;
void a (){
    x = 9;
}

int main()
{
    
    a();
    printf("%d",x);

    return 0;
}

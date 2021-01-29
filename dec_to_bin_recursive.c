#include <stdio.h>

int dec_to_bin(int n){
    if (n == 0)
    {
        return 0;
    }
    return dec_to_bin(n/2)*10 + n%2;
}

int main()
{
    printf("%d\n",dec_to_bin(5));
    return 0;
}

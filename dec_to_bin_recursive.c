#include <stdio.h>

int dec_to_bin(int n){
    if (n == 1)
    {
        return 1;
    }
    return dec_to_bin(n/2)*10 + n%2;
}

int main()
{
    printf("%d",dec_to_bin(12));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
struct threeNum
{
    int n1, n2, n3;
};
int main()
{
    int n;
    struct threeNum num,num2;
    FILE *fptr;

    // write file
    fptr = fopen("temp.bin", "wb");
    for (n = 1; n < 5; ++n) 
    {
        num.n1 = n;
        num.n2 = 5 * n;
        num.n3 = 5 * n + 1;
        fwrite(&num, sizeof(struct threeNum), 1, fptr);
        printf("%d %d %d\n", num.n1, num.n2, num.n3);
    }
    fclose(fptr);

    // read file
    fptr = fopen("temp.bin", "rb");
    for (n = 1; n < 5; ++n) 
    {
        fread(&num2, sizeof(struct threeNum), 1, fptr);
        printf("n1: %d\tn2: %d\tn3: %d\n", num.n1, num.n2, num.n3);
    }
    fclose(fptr);
    return 0;
}
#include<stdio.h>
#include<string.h>

int main()
{
    int i = 0, capitals = 0, smalls = 0;
    char string1[100], string2[100];
    gets(string1);
    while (string1[i] != '\0')
    {
        if (string1[i]>='a' && string1[i]<='z' )
        {
            smalls++;
        } else if(string1[i]>='A' && string1[i]<='Z')
        {
            capitals++;
        }
        i++;
    }
    printf("capitals: %d, smalls: %d",capitals, smalls);
    return 0;
}








// #include<stdio.h>
// #include<string.h>

// int main()
// {
//     int i = 0, vowel = 0, consonant = 0;
//     char string1[100], string2[100];
//     gets(string1);
//     while (string1[i] != '\0')
//     {
//         if (string1[i] == 'a' ||string1[i] == 'e' ||string1[i] == 'i' ||string1[i] == 'o' ||string1[i] == 'u' ||string1[i] == 'A' ||string1[i] == 'E' ||string1[i] == 'I' ||string1[i] == 'O' ||string1[i] == 'U')
//         {
//             vowel++;
//         } else
//         {
//             consonant++;
//         }
//         i++;
//     }
//     printf("vowels: %d, consonants: %d",vowel, consonant);
//     return 0;
// }















// int main()
// {
//     char string1[100];
//     int i = 0;
//     gets(string1);
//     // while (string1[i]!='\0')
//     // {
//     //     i++;
//     // }
//     // printf("%d",i);
//     for (i = 0; string1[i]!='\0'; i++)
//     {}
//     printf("%d",i);
    
//     return 0;
// }

#include<stdio.h>
#include<string.h>
int main()
{
    char input_string[1000];
    char input_word[100];
    int i;
    int n = 0;
    int flag = 0;
    printf("input string: ");
    gets(input_string);
    printf("input word: ");
    gets(input_word);
    while (input_string[n] != '\0'){
        if (input_string[n] == input_word[0]){
            int m = 0;
            flag = 0;
            while (input_word[m] != '\0'){
                if (input_string[n+m] != input_word[m]){
                    flag = 1;
                    break;
                }
                m++;
            }
            if(flag == 0 && 
              (n == 0 || input_string[n-1] == ' ') && 
              (input_string[n+m] == '\0' || input_string[n+m] == ' ')){
                for (i = n; input_string[i] != '\0'; i++){
                    input_string[i] = input_string[i+m+1];
                }
                input_string[i-m] = '\0';
                n--;
            }
        }
        n++;
    }
    puts(input_string);
    return 0;
}
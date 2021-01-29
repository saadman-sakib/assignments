#include<stdio.h>
#include<string.h>
int length = 1;

//splits the string into a word array (2d char array)
void split(char input_str[500], char string[50][50])
{
    int j = 0, i = 0, k = 0;

    while (input_str[k] != '\0')
    {
        //if found a space, skip it and ... 
        if (input_str[k] == ' ')
        {
            string[j][i] = '\0';
            length++;
            k++;
            j++;
            i = 0;
        }
        
        string[j][i] = input_str[k];
        i++;
        k++;
    }
    string[j][i] = '\0';
}

//returns 1 if the the first word is lexographically higher, else returns 0.
int compare(char str1[50], char str2[50])
{
    int i = 0;
    while (str1[i] != '\0')
    {
        if (str1[i]>str2[i])
        {
            return 1;
        }
        else if (str2[i]>str1[i])
        {
            return 0;
        }
        else if(str2[i] == '\0')
        {
            return 1;
        }
        else
        {
            i++;
        }
    }
    return 0;
}

//sorts the word array according to lexographically.
void bubbleSort(char arr[50][50], int n) 
{ 
   int i, j; 
   for (i = 0; i < n-1; i++)       
  
       // Last i elements are already in place    
       for (j = 0; j < n-i-1; j++) 
       {
           if (compare(arr[j], arr[j+1])) 
           {
               char temp[50];
               strcpy(temp,arr[j]);
               strcpy(arr[j],arr[j+1]);
               strcpy(arr[j+1], temp);
           }
       }
}

int main()
{
    char string[50][50];
    char input_str[500];

    //taking input
    gets(input_str);

    //splitting the string in 2d array...
    split(input_str,string);

    //sorting the array...
    bubbleSort(string, length);

    //printing the array...
    for (int i = 0; i < length; i++)
    {
        printf("%s ",string[i]);
    }
    
    return 0;
}

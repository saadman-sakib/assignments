#include<stdio.h>
int main()
{

    int n;
    printf("print the size of the array: ");
    scanf("%d", &n);

    int a[n] ;
    printf("print the array in ascending order: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int x;
    printf("print the element you want to search: ");
    scanf("%d", &x);
    
    int low = 0;
    int high = n-1;
    int mid;
    int comparisons = 0;
    


    while (low <= high)
    {
        mid = (high + low)/2;

        if (x == a[mid])
        {
            
            comparisons++;
            break;
        }
        
        if (x > a[mid])
        {
            low = mid + 1;
            comparisons++;
        } 
        else if ( x < a[mid])
        {
            high = mid - 1;
            comparisons++;
        } 
    }

    if (x == a[mid])
    {
        printf("index: %d. Comparisons needed %d times", mid, comparisons);
    }
    else
    {
        printf("It's not here. Comparisons needed %d time",comparisons);
    }
    
    return 0;
}

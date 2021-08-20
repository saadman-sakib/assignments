#include<stdio.h>

void merge(int array[], int start, int end )
{
    int temp_array[end-start+1];
    int mid = (start + end)/2;
    int i = start;
    int j = mid+1;
    int x = 0;
    while (i != mid+1 || j != end+1) {
        if ( i<mid+1 && (j>end || (array[i] < array[j])) ) {
            temp_array[x] = array[i];
            i++;x++;
        } else {
            temp_array[x] = array[j];
            j++;x++;
        }
    }
    while (x != 0) {
        array[start+x-1] = temp_array[x-1];
        x--;
    }
}

void merge_sort(int array[], int start, int end) {
    if (start == end) {
        return;
    }
    int mid = (start + end)/2;
    merge_sort(array, start, mid);
    merge_sort(array, mid+1, end);
    merge(array,start,end);
}

int main() {
    int array[22] = {546,12,5434,45,231,123,34,54,6,34,365,6677,9,1,0,88,7,8,9,2,3,5};
    merge_sort(array,0,21);
    
    for (int i = 0; i < 22; i++) {
        printf("%d ",array[i]);
    }
    
    return 0;
}


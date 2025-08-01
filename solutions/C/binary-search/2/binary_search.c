#include "binary_search.h"
#include <stdio.h>
#include <stdlib.h>

void swap(int* f, int* s)
{
    int temp = *f;
    *f = *s;
    *s = temp;
}

void sorting_the_list(int arr[], int n){
    int i, j, min_idx;
    for (i=0; i< n-1; i++) {
        min_idx = i;
        for (j = i +1; j < n; j++)
            if ( arr[j] < arr[min_idx])
                min_idx = j;
        swap(&arr[min_idx], &arr[i]);
    }

}

const int *binary_search(int value, const int *arr, size_t length) {
    
    if(!arr)return NULL ;
    if (value < arr[0]) {
        return NULL;
    }
    size_t low = 0, high = length - 1;
    while (low <= high) {
        size_t middle = (low + high) / 2;

        if (arr[middle] == value) {
            return &arr[middle]; 
        } else if (arr[middle] > value) {
            high = middle - 1; 
        } else {
            low = middle + 1; 
        }
    }

    return NULL; 
}


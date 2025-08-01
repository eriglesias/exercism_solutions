#include "etl.h"
#include <string.h>
#include <stdlib.h>

// calculates the total size neeeded for the output array based on the keys in the input legacy_map array
size_t getsize(const legacy_map * input, const size_t input_len) {
    size_t size = 0;
    //iterates through each element of the input array and adds the length of the keys to the 'size' variable
    for (unsigned int i=0; i<input_len; i++)
        size += strlen(input[i].keys);
    return size;
}

//compares the keys of two new maps structs and returns -1 if the first key is smalles, +1 if the first key is larger, and 0 if they are equal
int cmpfunc(const void *v1, const void *v2) {
    const new_map *p1 = (new_map *)v1;
    const new_map *p2 = (new_map *)v2;
    if (p1->key < p2->key)
        return -1;
    else if (p1->key > p2->key)
        return +1;
    else
        return 0;
}

// converts an array of legacy_map structs into an array of 'new_map' structs 

int convert(const legacy_map *input, const size_t input_len, new_map **output) {
    //dynamically allocates memory for the output array based on the total size calculated by 'getssize'
    new_map *array = (new_map *) malloc(getsize(input, input_len)*(sizeof(new_map)));
    int count = 0;
    // iterates through each element of the input array, extracting each character from the keys and creating a new_map entry for each character
    for (size_t i=0; i<input_len; i++) {
        int length = strlen(input[i].keys);
        for (int j=0; j<length; j++) {
            array[count].key = input[i].keys[j] + 32;
            array[count].value = input[i].value;
            count++;
        }
    }

    //sorts the array using qsort with the comparator cmpfunc
    qsort(array, count, sizeof(new_map), cmpfunc);
    
    // assigns the sorted array to the output pointer and returns the count of elements in the output array 
    *output = array;
    return count;
}




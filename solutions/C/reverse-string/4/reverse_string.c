#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "reverse_string.h"
#include <assert.h>

char* reverse(const char *str) {
    size_t length = strlen(str);
    char *reversed = malloc(length + 1); 

    //check memory allocation
    if (reversed == NULL) {
        return NULL;
    }
    for (size_t i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }

    reversed[length] = '\0'; 
    return reversed;
}



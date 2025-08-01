#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "reverse_string.h"
#include <assert.h>

char* reverse(const char *str) {
    int length = strlen(str);
    char *reversed = malloc(length + 1); 

    //check memory allocation
    if (reversed == NULL) {
        assert(reversed != NULL);
        return NULL;
    }
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }

    reversed[length] = '\0'; 
    return reversed;
}



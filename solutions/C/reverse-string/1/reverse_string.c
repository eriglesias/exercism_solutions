#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "reverse_string.h"

char* reverse(char *str) {
    int length = strlen(str);
    char *reversed = malloc(length + 1); // +1 for the null terminator

    if (reversed == NULL) {
        return NULL; // return NULL if memory allocation fails
    }

    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }

    reversed[length] = '\0'; // adding the null terminator
    return reversed;
}



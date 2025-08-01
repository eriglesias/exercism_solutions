#include "acronym.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>


char *abbreviate(const char *phrase){
    if(phrase == NULL || phrase[0] == '\0') {
        return NULL;
    }

    int len = strlen(phrase);
    char *acronym = (char *)malloc(len * sizeof(char)); // Allocate memory for the acronym
    if (acronym == NULL) {
        return NULL; // Memory allocation failed
    }

    int j=0; // index for the acronym
    for (int i = 0; i < len; i++) {
        // check if the character is the first character of a word
        if (i == 0 || phrase[i-1] == ' ' || phrase[i - 1] == '-' || phrase[i - 1] == '_') {
            // check if it's an alphabet character
            if(isalpha(phrase[i])) {
                // convert to uppercase and append to the acronym
                acronym[j++] = toupper(phrase[i]);
            }
        }
    }
    acronym[j] = '\0'; // null-terminate the acronym
    return acronym;

}


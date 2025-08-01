#include "acronym.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>


char *abbreviate(const char *phrase) {
    if (phrase == NULL || phrase[0] == '\0') {
        return NULL;
    }

    int len = strlen(phrase);
    char *acronym = (char *)malloc((len + 1) * sizeof(char)); // allocate memory for the acronym
    if (acronym == NULL) {
        return NULL; // memory allocation failed
    }

    int j = 0; // index for the acronym
    for (int i = 0; i < len; i++) {
        // check if the character is the first character of a word
        if (i == 0 || phrase[i - 1] == ' ' || phrase[i - 1] == '-' || phrase[i - 1] == '_') {
            // check if it's an alphabet character
            if (isalpha((unsigned char)phrase[i])) { // cast to unsigned char to handle non-ASCII characters
                // convert to uppercase and append to the acronym
                acronym[j++] = (char)toupper((unsigned char)phrase[i]); // cast to char
            }
        }
    }
    acronym[j] = '\0'; // null-terminate the acronym
    return acronym;
}


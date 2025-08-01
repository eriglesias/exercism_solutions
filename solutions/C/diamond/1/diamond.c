#include "diamond.h"
#include <stdlib.h>
#include <string.h>

// takes a single character 'letter' as input and returns a 2D array (a matrix) of characters representing the diamond
char **make_diamond(const char letter) {
    // size is determined by the distance of the input letter from 'A'
    int len = (letter - 'A') * 2 + 1;
    
    // dinamic allocation with malloc, each row is allocated separately
    char **diamond = malloc(len * sizeof(char*));
    char curr_char;
    int offset;
    for (int i = 0; i < len; i++) {
        diamond[i] = malloc(len);
        // diamond is initialized with spaces using 'memset'
        memset(diamond[i], ' ', len);
        
        //calculates the offset from the center
        offset = abs(-i + letter - 'A');
        // calculates the current character 
        curr_char = letter - offset;
        
        // assigns the current character to the appropiate positions in the current row, symetrically around center
        diamond[i][offset] = curr_char;
        diamond[i][-offset + (letter - 'A') * 2] = curr_char;
    }
    
    //returns the diamond 
    return diamond;
}
void free_diamond(char **diamond) {
    for (size_t i = 0; i < strlen(diamond[0]); i++)
        free(diamond[i]);
    free(diamond);
}


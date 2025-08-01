#include "binary.h"
#include <stdio.h>
#include <string.h>

int convert(const char *input) {
    // Check for empty string
    if (!input || !(*input))
        return -1;

    long res = 0; // Initialize result

    // Iterate through all characters of input string and update result
    while (*input != '\0') {
        // Check if the character is a valid binary digit (0 or 1)
        if (*input != '0' && *input != '1')
            return -1;

        res <<= 1; // Update result by multiplying with base 2
        res += *input++ - '0'; // Add current digit to result
    }

    return res;
}

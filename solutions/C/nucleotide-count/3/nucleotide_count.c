#include "nucleotide_count.h"
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

#define MAX_RESULT_LENGTH 36

char *count(const char *dna_strand)
{
    uint16_t a_count = 0;
    uint16_t c_count = 0;
    uint16_t g_count = 0;
    uint16_t t_count = 0;

    size_t dna_length = strlen(dna_strand);

    char *result = calloc(MAX_RESULT_LENGTH, sizeof(char));

    if (result == NULL) {
        return NULL;
    }

    for (size_t i = 0; i < dna_length; i++)
    {
        switch (dna_strand[i])
        {
        case 'A':
            a_count++;
            continue;
        case 'C':
            c_count++;
            continue;
        case 'G':
            g_count++;
            continue;
        case 'T':
            t_count++;
            continue;
        default:
            strncpy(result, "", 1);
            return result;
        }
    }

    
    snprintf(result, MAX_RESULT_LENGTH, "A:%" PRIu16 " C:%" PRIu16 " G:%" PRIu16 " T:%" PRIu16, a_count, c_count, g_count, t_count);

    return result;
}

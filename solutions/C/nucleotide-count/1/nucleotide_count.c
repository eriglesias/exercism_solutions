#include "nucleotide_count.h"
#include <stdint.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *count(const char *dna_strand)
{
    uint16_t a_count = 0;
    uint16_t c_count = 0;
    uint16_t g_count = 0;
    uint16_t t_count = 0;
    char *result = calloc(100, sizeof(char));
    for (uint32_t i = 0; i < strlen(dna_strand); i++)
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
    snprintf(&result[0], 100, "A:%d C:%d G:%d T:%d", a_count, c_count, g_count, t_count);
    return result;
}


// nucleotides: adenine, cytosine, guanine, thymine.
/* 
Given a string representing a DNA sequence, count how many of each nucleotide is present. If the string contains characters that aren't A, C, G, or T then it is invalid and you should signal an error.
*/


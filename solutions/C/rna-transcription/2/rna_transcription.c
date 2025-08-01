#include <stdlib.h>
#include <string.h>
#include "rna_transcription.h"

char convert_nucleotide(char);

char convert_nucleotide(char nuc) {
  switch (nuc) {
  case 'A':
    return 'U';
  case 'C':
    return 'G';
  case 'G':
    return 'C';
  case 'T':
    return 'A';
  default:
    return '\0';
  }
}
char *to_rna(const char *dna) {
  if (dna == NULL)
    return NULL;

  size_t len = strlen(dna);
  char *rna = malloc(len + 1);
  if (rna == NULL)
    return NULL;

  for (size_t i = 0; i < len; ++i) {
    char rna_nucleotide = convert_nucleotide(dna[i]);
    if (rna_nucleotide == '\0') {
        free(rna);
        return NULL;
    } 
    rna[i] = rna_nucleotide;
  }

  rna[len] = '\0';  // add null terminator to the RNA sequence 
  return rna;
}

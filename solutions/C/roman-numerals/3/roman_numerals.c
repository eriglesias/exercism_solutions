#include "roman_numerals.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char* thousands[] = {"", "M", "MM", "MMM"};
char* hundreds[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
char* tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
char* units[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};  

char *to_roman_numeral(unsigned int number){
  char* result = (char*)malloc(sizeof(char) * 16); // size for 16 characters 
   if (result == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(EXIT_FAILURE);
    }
    strcpy(result, "");
    strcat(result, thousands[number / 1000]);
    strcat(result, hundreds[(number % 1000) / 100]);
    strcat(result, tens[(number % 100) / 10]);
    strcat(result, units[number % 10]);
    return result;
}


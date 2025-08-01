#include "sieve.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

// create a list of all the numbers between to and your given number. Then you repeat the following steps:
// 1. Find the next unmarked number in your list. This is a prime number
// 2. Mark all the multiples of that prime number as a composite (not prime)
// you keep repeating these steps until you've gone through every number in your list. At the end, all the unmarked are prime

static uint32_t* create_list(uint32_t limit) {
    uint32_t* ptr;

    if (limit < 2) {
        return NULL; // Return NULL for an empty list
    } else {
        // Allocate memory for the list of numbers
        ptr = (uint32_t*)malloc((limit - 1) * sizeof(uint32_t));
        if (ptr == NULL) {
            printf("Memory allocation failed.\n");
            exit(EXIT_FAILURE);
        }

        // Initialize the list with numbers from 2 to limit
        for (uint32_t i = 2; i <= limit; ++i) {
            ptr[i - 2] = i;
        }
    }

    return ptr;
}


uint32_t sieve(uint32_t limit, uint32_t *primes, size_t max_primes){
    uint32_t *numbers = create_list(limit); // Creates the list 
    
    if(numbers == NULL) {
        printf("Limit is less than 2. No list created. \n");
        return 0;
    }

    // Apply the Sieve 
    for (uint32_t i =2; i * i <= limit; i++){
        if (numbers[i -2] !=0) { // skip if the number is already marked as non prime
            for (uint32_t j = i * i; j <= limit; j+=i) {
                numbers[j - 2] =0; // Mark multiples of i as non-prime
            }
        }
    }

    // Copy prime numbers to the output array
    u_int32_t count = 0;
    for (uint32_t i =0; i < limit -1 && count < max_primes; ++i) {
        if (numbers[i] !=0){
            primes[count++] = numbers[i];
        }
    }

    free(numbers); // Free allocated memory for the list 

    return count; 
} 





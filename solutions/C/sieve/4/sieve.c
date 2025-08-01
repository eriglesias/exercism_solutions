#include "sieve.h"
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h> 

/**
 * @brief Finds prime numbers up to a given limit using the Sieve of Eratosthenes algorithm.
 *
 * @param limit The upper limit for finding prime numbers.
 * @param primes Pointer to an array where prime numbers will be stored.
 * @param max_primes The maximum number of primes to find.
 * @return The number of prime numbers found within the specified limit.
 */
uint32_t sieve(uint32_t limit, uint32_t *primes, size_t max_primes) {
    // Dynamically allocate memory for the is_prime array
    bool *is_prime = (bool *)malloc((limit + 1) * sizeof(bool));
    if (is_prime == NULL) {
        // Error handling for memory allocation failure
        return 0;
    }

    // Set all elements of is_prime array to true initially
    for (uint32_t i = 0; i <= limit; i++) {
        is_prime[i] = true;
    }

    uint32_t count = 0; // Counter for the number of prime numbers found
    for (uint32_t i = 2; i <= limit && count < max_primes; i++) {
        if (is_prime[i]) {
            // Optimized loop to mark multiples of prime numbers as non-prime
            for (uint32_t j = i * i; j <= limit; j += i) {
                is_prime[j] = false;
            }
            primes[count++] = i; // Store prime number and increment count
        }
    }

    free(is_prime); // Free dynamically allocated memory
    return count;
}

#include <stdbool.h>
#include <ctype.h>
#include <stddef.h>

/**
 * @brief Checks if a given sentence is a pangram (contains all letters of the alphabet)
 * 
 * @param sentence Pointer to the null-terminated string representing the sentence
 * @return true if the sentence is a pangram, false otherwise
 */
bool is_pangram(const char *sentence) {
    if (sentence == NULL) {
        return false; // Return false if the input sentence is NULL
    }

    // Initialize a bitmask to keep track of which letters have been found
    unsigned int found = 0;

    // Iterate through each character of the sentence
    while (*sentence != '\0') {
        if (isalpha(*sentence)) {
            // Convert character to lowercase and calculate its index in the bitmask
            unsigned int index = tolower(*sentence) - 'a';
            // Set the corresponding bit in the bitmask
            found |= (1 << index);
        }
        // Move to the next character in the sentence
        sentence++;
    }

    // Check if all bits representing 'a' to 'z' are set in the bitmask
    for (size_t i = 0; i < 26; i++) {
        if ((found & (1 << i)) == 0) {
            return false; // If any letter is missing, return false
        }
    }

    // If all bits representing 'a' to 'z' are set, return true (pangram)
    return true;
}

